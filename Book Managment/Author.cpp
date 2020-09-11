#include<iostream>
#include"Author.h"
using namespace std;
Author::Author()
{
    numberOfBooksPublished = 0;
}
Author::Author(string n)
{
    name = n;
    numberOfBooksPublished = 0;
}
Novel Author::publishNovel(double is, string ti, int p, int y, int seq)
{
    Novel temp(is, ti, p, getName(), 1, y, seq);
    numberOfBooksPublished++;
    return temp;
}
Textbook Author::publishTextBook(double is, string ti, int p, int y, int ch)
{
    Textbook temp(is, ti, p, getName(), 1, y, ch);
    numberOfBooksPublished++;
    return temp;
}
string Author::getName()
{
    return name;
}
string Author::publish()
{
    numberOfBooksPublished++;
    return name;
}
void Author::printData()
{
    cout << "\n\t\t\t******    Author's Data    ******\n";
    cout << "\t\t\tName:  \t\t" << name << endl;
    cout << "\t\t\tBooks Published:  \t" << numberOfBooksPublished << endl;
    cout << "\t\t\t-------------------------------\n\n";
}
