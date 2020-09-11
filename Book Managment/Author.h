#ifndef Included_Author_H
#define Included_Author_H
#include<string>
using namespace std;
#include "Novel.h"
#include "Textbook.h"
class Author
{
private:
    string name;
    int numberOfBooksPublished;
    Novel novel[100];
    Textbook textbook[100];
public:
    Author();
    Author(string);
    string publish();
    Novel publishNovel(double, string, int, int, int);
    Textbook publishTextBook(double, string, int, int, int);
    string getName();
    void printData();
};
#endif // Included_Author_H

