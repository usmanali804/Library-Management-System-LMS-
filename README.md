# Library Management System

A C++ console-based Library Management System that allows librarians to manage books, members, and borrowing operations efficiently.

## Author
- **GitHub:** [@usmanali804](https://github.com/usmanali804)
## Features

- Add and remove books
- Add and remove members
- Issue books to members
- Return borrowed books
- Search books by title
- Display all available books
- Display currently borrowed books
- Hash table implementation for efficient book lookups

## Technical Details

- Language: C++
- Build System: G++
- IDE Support: Visual Studio Code
- Data Structures Used:
  - Vector (for storing books and members)
  - Unordered Map (hash table for book lookups)
  - List (for borrowed books tracking)

## Project Structure
LibraryManagementSystem/

├── include/

│ ├── Book.h

│ ├── Library.h

│ └── Member.h

├── src/

│ ├── Book.cpp

│ ├── Library.cpp

│ ├── Member.cpp

│ └── main.cpp

└── .vscode/

├── c_cpp_properties.json

├── launch.json

├── settings.json

└── tasks.json


## Setup and Installation

1. Clone the repository:
bash
git clone https://github.com/usmanali804/Library-Management-System-LMS-.git

2. Ensure you have MinGW G++ compiler installed

3. Open the project in Visual Studio Code

4. Build the project using the build task (Ctrl+Shift+B)

## Usage

Run the compiled executable to start the Library Management System. The main menu provides the following options:

1. Add Book
2. Remove Book
3. Add Member
4. Remove Member
5. Issue Book
6. Return Book
7. Display Books
8. Display Borrowed Books
9. Search Book by Title
10. Exit

## Building from Source

The project includes VSCode tasks for building. You can build using:

- VSCode: Press `Ctrl+Shift+B`
- Terminal: Run the following command in the project root:
bash
g++ -g src/main.cpp src/Library.cpp src/Book.cpp src/Member.cpp -I include -o LibrarySystem.exe

## Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## License

This project is open source and available under the [MIT License](LICENSE).

## Contact

- GitHub: [@usmanali804](https://github.com/usmanali804)

## Acknowledgments

- Thanks to all contributors who have helped with this project
- Inspired by real-world library management systems
