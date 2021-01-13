#ifndef __BOOK_H
#define __BOOK_H

#include <string>

class Book {
    public :
        Book();
        //Book(const Book&)=delete;
        Book(const Book&);
        ~Book();
        Book( std::string isbn, std::string title, std::string author, std::string publisher, 
              unsigned int pubYear, double price, unsigned int noOfPages);
        
        void SetIsbn(std::string isbn);
        void SetTitle(std::string title);
        void SetAuthor(std::string author);
        void SetPublisher(std::string publisher);
        void SetPubYear(unsigned int pubYear);
        void SetPrice(double price);
        void SetPages(unsigned int noOfPages);

        std::string GetIsbn();
        std::string GetTitle();
        std::string GetAuthor();
        std::string GetPublisher();
        unsigned int GetPubYear();
        double GetPrice();
        unsigned int GetNoOfPages();

        friend std::ostream & operator<< (std::ostream &out, Book &b );

        //TODO: const suffix for immutable function

    private :
        std::string m_Isbn;
        std::string m_Title;
        std::string m_Author;
        std::string m_Publisher;
        unsigned int m_PubYear;
        double m_Price;
        unsigned int m_NoOfPages;
};

#endif