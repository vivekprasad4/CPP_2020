#ifndef __LIBRARY_H
#define __LIBRARY_H

#include "book.h"
#include <list>

class Library {
    public :
        Library();
        ~Library();
        Library(const Library &libary)=delete;

        void addBook (  std::string isbn, std::string title, std::string author, std::string publisher,
                        unsigned int pubYear, double price, unsigned int noOfPages);
        bool removeBookByISBN(std::string Isbn);
        void displayAll();
        Book* findBookByISBN(std::string Isbn);
        double findAveragePrice();
        Book& findBookwithMaxPages();
        unsigned int count() { return books.size(); }

    // sortByTitle
    // sortByAuthor
    // MinPriceReleased in an Year

    private:
        std::list <Book> books;

};

#endif