
#include "book.h"

#include <iostream>

Book::Book()
{ }
Book::Book(const Book& b1)
{
    m_Isbn = b1.m_Isbn;
    m_Title = b1.m_Title;
    m_Author = b1.m_Author;
    m_Publisher = b1.m_Publisher;
    m_PubYear = b1.m_PubYear;
    m_Price = b1.m_Price;
    m_NoOfPages = b1.m_NoOfPages;
}
Book::~Book()
{ }
Book::Book( std::string isbn, std::string title, std::string author, std::string publisher, 
            unsigned int pubYear, double price, unsigned int noOfpages):
            m_Isbn(isbn),
            m_Title(title),
            m_Author(author),
            m_Publisher(publisher),
            m_PubYear(pubYear),
            m_Price(price),
            m_NoOfPages(noOfpages)
{

}
        
void Book::SetIsbn(std::string isbn)
{
    m_Isbn = isbn;
}

void Book::SetTitle(std::string title)
{
    m_Title = title;
}

void Book::SetAuthor(std::string author)
{
    m_Author = author;
}

void Book::SetPublisher(std::string publisher)
{
    m_Publisher = publisher;
}

void Book::SetPubYear(unsigned int pubYear)
{
    m_PubYear = pubYear;
}

void Book::SetPrice(double price)
{
    m_Price = price;
}

void Book::SetPages(unsigned int noOfPages)
{
    m_NoOfPages = noOfPages;
}

std::string Book::GetIsbn()
{
    return m_Isbn;
}
        
std::string Book::GetTitle()
{
    return m_Title;
}

std::string Book::GetAuthor()
{
    return m_Author;
}

std::string Book::GetPublisher()
{
    return m_Publisher;
}

unsigned int Book::GetPubYear()
{
    return m_PubYear;
}

double Book::GetPrice()
{
    return m_Price;
}

unsigned int Book::GetNoOfPages()
{
    return m_NoOfPages;
}

std::ostream & operator<< (std::ostream &out, Book &b )
{
    out << "Book :-" << std::endl;
    out << "ISBN        : " << b.m_Isbn << std::endl;
    out << "Title       : " << b.m_Title << std::endl;
    out << "Author      : " << b.m_Author << std::endl;
    out << "Publisher   : " << b.m_Publisher << std::endl;
    out << "Pub Year    : " << b.m_PubYear << std::endl;
    out << "Price       : " << b.m_Price << std::endl;
    out << "No of Pages : " << b.m_NoOfPages << std::endl;

    return out;
}

