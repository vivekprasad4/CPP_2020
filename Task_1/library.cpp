#include "library.h"
#include <iostream>

Library::Library()
{ }

Library::~Library()
{ }

void Library::addBook ( std::string isbn, std::string title, std::string author, std::string publisher,
                        unsigned int pubYear, double price, unsigned int noOfPages)
{
    Book tempBook(isbn,title,author,publisher,pubYear,price,noOfPages);
    books.push_back(std::move(tempBook));
}

bool Library::removeBookByISBN(std::string Isbn)
{ 
    bool status = false;
    Book B; 
    std::list <Book> :: iterator it;
    for(it = books.begin(); it != books.end(); ++it)
    {
        if(Isbn == (*it).GetIsbn())
        {
            it = books.erase(it);
            status = true;
            break;
        }
    }

    return status;
}

void Library::displayAll()
{ 
    // Print out the list
    std::list <Book> :: iterator it;
    for(it = books.begin(); it != books.end(); ++it)
    {
        std::cout << (*it);
    }
    std::cout << std::endl; 
}

Book* Library::findBookByISBN(std::string Isbn)
{
    Book* B1=NULL;
    std::list <Book> :: iterator it;
    for(it = books.begin(); it != books.end(); ++it)
    {
        if(Isbn == (*it).GetIsbn())
        {
            B1 = &(*it);
        }
    }
    return B1;
}

double Library::findAveragePrice()
{ 
    double sumPrice = 0;
    unsigned int bCount = 0;
    std::list <Book> :: iterator it;
    for(it = books.begin(); it != books.end(); ++it)
    {
        bCount++;
        sumPrice = sumPrice + (*it).GetPrice();
    }

    return((bCount == 0 ) ? static_cast<double>(bCount) : static_cast<double>(sumPrice/bCount));
}

Book& Library::findBookwithMaxPages()
{   
    Book* B1;
    unsigned int maxPages = 0;
    std::list <Book> :: iterator it;
    for(it = books.begin(); it != books.end(); ++it)
    {
        if(maxPages < (*it).GetNoOfPages())
        {
            maxPages = (*it).GetNoOfPages();
            B1 = &(*it);
        }       
    }
    
    return *(B1);
}
