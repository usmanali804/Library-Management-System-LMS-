#include "Library.h"
#include <iostream>
using namespace std;

int main() {
    Library library;
    int choice;

    do {
        cout << "\nLibrary Management System" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Remove Book" << endl;
        cout << "3. Add Member" << endl;
        cout << "4. Remove Member" << endl;
        cout << "5. Issue Book" << endl;
        cout << "6. Return Book" << endl;
        cout << "7. Display Books" << endl;
        cout << "8. Display Borrowed Books" << endl;
        cout << "9. Search Book by Title" << endl;
        cout << "10. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int id;
            string title, author;
            cout << "Enter Book ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Title: ";
            getline(cin, title);
            cout << "Enter Author: ";
            getline(cin, author);
            library.addBook(id, title, author);
            break;
        }
        case 2: {
            int id;
            cout << "Enter Book ID to remove: ";
            cin >> id;
            library.removeBook(id);
            break;
        }
        case 3: {
            int id;
            string name;
            cout << "Enter Member ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            library.addMember(id, name);
            break;
        }
        case 4: {
            int id;
            cout << "Enter Member ID to remove: ";
            cin >> id;
            library.removeMember(id);
            break;
        }
        case 5: {
            int bookID, memberID;
            cout << "Enter Book ID to issue: ";
            cin >> bookID;
            cout << "Enter Member ID to issue to: ";
            cin >> memberID;
            library.issueBook(bookID, memberID);
            break;
        }
        case 6: {
            int bookID;
            cout << "Enter Book ID to return: ";
            cin >> bookID;
            library.returnBook(bookID);
            break;
        }
        case 7:
            library.displayBooks();
            break;
        case 8:
            library.displayBorrowedBooks();
            break;
        case 9: {
            string title;
            cout << "Enter Title to search: ";
            cin.ignore();
            getline(cin, title);
            library.searchBookByTitle(title);
            break;
        }
        case 10:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice, try again!" << endl;
        }
    } while (choice != 10);

    return 0;
}