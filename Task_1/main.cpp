#include <iostream>

#include "library.h"

void addBookToLibrary(Library & lib);

int main()
{
    std::string tmpIsbn;
    Book* tmpBook;
    bool exit_Program = false;
    int ch = 0;
    Library libary;

    while(!exit_Program)
    {
        std::cout << "*****    Welcome to Library    *****\n\n";
        std::cout << "Main Menu\n";
        std::cout << "------------------------------------\n";
        std::cout << " 1. Add book to library\n";
        std::cout << " 2. Find book by ISBN\n";
        std::cout << " 3. Get book with maximum pages\n";
        std::cout << " 4. Get average price of all books\n";
        std::cout << " 5. Total book in library\n";
        std::cout << " 6. Display all books in library\n";
        std::cout << " 7. Remove Book from Library by ISBN\n";
        std::cout << " 8. Exit Program\n";
        std::cout << "------------------------------------\n";
        std::cout << " Enter choice: ";
        std::cin >> ch;
        std::cout << "------------------------------------\n";

        switch(ch)
        {
            case 1:
                addBookToLibrary(libary);
            break;
            case 2:
                std::cout << "Find book by ISBN\n";
                std::cout << "----------------------------------\n";
                std::cout << "Enter Book ISBN to find in libary : ";
                std::cin  >> tmpIsbn;
                tmpBook = libary.findBookByISBN(tmpIsbn);
                if(tmpBook == NULL)
                {
                    std::cout << "Book with ISBN : " << tmpIsbn
                              << "Not present in Library";
                }
                else
                {
                    std::cout << tmpBook ;
                }
                std::cout << "----------------------------------\n";
            break;
            case 3:
                std::cout << "Find book with maximum pages\n";
                std::cout << "----------------------------------\n";
                if( libary.count() > 0 )
                {
                    Book& B = libary.findBookwithMaxPages();
                    std::cout << "Book with Max Pages\n";
                    std::cout << B;
                }
                else
                {
                    std::cout << "No books present in library\n";
                }
                std::cout << "----------------------------------\n";
            break;
            case 4:
                std::cout << "Average Price all books : "
                          << libary.findAveragePrice()
                          << std::endl;
            break;
            case 5:
                std::cout << "Total books in Library : " << libary.count() << std::endl;
            break;
            case 6:
                std::cout << "Display all books in library\n";
                libary.displayAll();
            break;
            case 7:
                std::cout << "Remove book from library\n";
                std::cout << "----------------------------------\n";
                std::cout << "Enter Book ISBN to find in libary : ";
                std::cin  >> tmpIsbn;
                if(libary.removeBookByISBN(tmpIsbn) == true)
                {
                    std::cout << "Book Removed\n";
                }
                else
                {
                    std::cout << "Book with ISBN: "<< tmpIsbn << "Not present\n";
                }
                std::cout << "----------------------------------\n";
            break;
            case 8:
                exit_Program = true;
                std::cout << "Exiting Program\n";
            break;
            default:
                std::cout << " ??? Invalid Input try Again ???\n";
            break;
        }
    }

    return 0;
}

void addBookToLibrary(Library & lib)
{
    std::string b_isbn, b_title, b_author, b_publisher;
    unsigned int b_pubYear, b_noOfPages;
    double b_price;
    std::cout << "Add book to libary\n";
    std::cout << "----------------------------------\n";
    std::cout << "Enter ISBN :";
    std::cin  >> b_isbn;
    std::cout << "Enter Title : ";
    std::cin  >> b_title;
    std::cout << "Enter Author : ";
    std::cin  >> b_author;
    std::cout << "Enter Publisher : ";
    std::cin  >> b_publisher;
    std::cout << "Enter Year Published : ";
    std::cin  >> b_pubYear;
    std::cout << "Enter Price : ";
    std::cin  >> b_price;
    std::cout << "Enter No of Pages : ";
    std::cin  >> b_noOfPages;
    std::cout << "----------------------------------\n";
    lib.addBook( b_isbn, b_title, b_author, b_publisher,
                 b_pubYear, b_price, b_noOfPages);
}