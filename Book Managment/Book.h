#ifndef Included_Book_H
#define  Included_Book_H
#include<string>
using namespace std;
class Book
{
protected:
    double isbn;
    string title;
    int numberOfPages;
    string authorName;
    int editionNumber;
    int editionYear;
public:
    Book();
    Book(double, string, int, string, int, int);
    virtual void updateEdition(double, int, int, int) = 0;
    void printData();
};

#endif // Included_Book_H
