#ifndef Included_Textbook_H
#define Included_Textbook_H
#include<string>
#include"Book.h"
using namespace std;
class Textbook : public Book
{
private:
    int numberOfChapters;
public:
    Textbook();
    Textbook(double, string, int, string, int, int, int);
    void updateNumberOfChapters(int);
    void updateEdition(double, int, int, int);
    void printData();
};
#endif

