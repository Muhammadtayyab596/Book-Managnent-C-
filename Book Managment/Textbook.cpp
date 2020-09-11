#include<iostream>
#include"Textbook.h"
using namespace std;
Textbook::Textbook()
{
}
Textbook::Textbook(double i, string t, int p, string n, int ed, int y, int num):Book(i, t, p, n, ed, y)
{
    numberOfChapters = num;
}
void Textbook::updateNumberOfChapters(int n)
{
    numberOfChapters = n;
}
void Textbook::updateEdition(double i, int p, int y, int ch)
{
    editionNumber++;
    isbn = i;
    numberOfPages = p;
    editionYear = y;
    numberOfChapters = ch;
}
void Textbook::printData()
{
    cout << "\n\t\t\t*********    TextBook's Data    *********\n";
    Book::printData();
    cout << "\t\t\tChapters:  \t\t" << numberOfChapters << endl;
    cout << "\t\t\t-------------------------------------\n\n";
}
