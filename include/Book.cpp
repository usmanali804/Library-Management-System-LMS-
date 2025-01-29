#include "Book.h"

Book::Book(int id, const std::string& title, const std::string& author)
    : bookID(id), title(title), author(author) {}

int Book::getBookID() const {
    return bookID;
}

std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}
