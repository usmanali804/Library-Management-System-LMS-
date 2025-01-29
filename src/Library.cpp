#include "Library.h"
#include <iostream>
using namespace std;

Library::~Library() {
    for (Book* book : books) delete book;
    for (Member* member : members) delete member;
}

void Library::addBook(int id, const std::string& title, const std::string& author) {
    // Check if a book with the same ID exists
    if (bookHashTable.find(id) != bookHashTable.end()) {
        std::cout << "Error: A book with ID " << id << " already exists!" << std::endl;
        return;
    }

    // Check for duplicate title and author
    for (Book* book : books) {
        if (book->getTitle() == title && book->getAuthor() == author) {
            std::cout << "Error: A book with the title '" << title 
                      << "' by the author '" << author << "' already exists!" << std::endl;
            return;
        }
    }

    // If no duplicates are found, add the new book
    Book* newBook = new Book(id, title, author);
    books.push_back(newBook);
    bookHashTable[id] = newBook;

    std::cout << "Book added successfully: " << title << " by " << author << std::endl;
}

void Library::removeBook(int id) {
    for (auto it = books.begin(); it != books.end(); ++it) {
        if ((*it)->getBookID() == id) {
            delete *it;
            books.erase(it);
            bookHashTable.erase(id);
            cout << "Book removed successfully." << endl;
            return;
        }
    }
    cout << "Book ID not found." << endl;
}

void Library::addMember(int id, const std::string& name) {
    for (Member* member : members) {
        if (member->getMemberID() == id) {
            cout << "Error: Member with ID " << id << " already exists!" << endl;
            return;
        }
    }

    Member* newMember = new Member(id, name);
    members.push_back(newMember);
    cout << "Member added: " << name << endl;
}

void Library::removeMember(int id) {
    for (auto it = members.begin(); it != members.end(); ++it) {
        if ((*it)->getMemberID() == id) {
            delete *it;
            members.erase(it);
            cout << "Member removed successfully." << endl;
            return;
        }
    }
    cout << "Member ID not found." << endl;
}

void Library::issueBook(int bookID, int memberID) {
    if (bookHashTable.find(bookID) == bookHashTable.end()) {
        cout << "Book ID " << bookID << " not found!" << endl;
        return;
    }

    Book* book = bookHashTable[bookID];
    borrowedBooks.push_back(book);
    cout << "Book " << book->getTitle() << " issued successfully." << endl;
}

void Library::returnBook(int bookID) {
    for (auto it = borrowedBooks.begin(); it != borrowedBooks.end(); ++it) {
        if ((*it)->getBookID() == bookID) {
            borrowedBooks.erase(it);
            cout << "Book with ID " << bookID << " returned successfully." << endl;
            return;
        }
    }
    cout << "Book not currently borrowed." << endl;
}

int Library::getTotalBooks() const {
    return books.size();
}

int Library::getTotalMembers() const {
    return members.size();
}

void Library::searchBookByTitle(const std::string& title) const {
    for (Book* book : books) {
        if (book->getTitle() == title) {
            cout << "Found: " << title << " by " << book->getAuthor() << endl;
            return;
        }
    }
    cout << "Book not found." << endl;
}

void Library::displayBooks() const {
    if (books.empty()) {
        cout << "No books in library." << endl;
        return;
    }
    cout << "Books in Library:" << endl;
    for (Book* book : books) {
        cout << book->getBookID() << ": " << book->getTitle() 
             << " by " << book->getAuthor() << endl;
    }
}

void Library::displayBorrowedBooks() const {
    if (borrowedBooks.empty()) {
        cout << "No borrowed books." << endl;
        return;
    }
    cout << "Borrowed Books:" << endl;
    for (Book* book : borrowedBooks) {
        cout << book->getBookID() << ": " << book->getTitle() 
             << " by " << book->getAuthor() << endl;
    }
}