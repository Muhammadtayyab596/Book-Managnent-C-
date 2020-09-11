#include<iostream>
#include"Book.h"

Book::Book()
{
}
Book::Book(double i, string t, int p, string n, int ed, int y)
{
    isbn = i;
    title = t;
    numberOfPages = p;
    authorName = n;
    editionNumber = ed;
    editionYear = y;
}
void Book::printData()
{
    cout << "\t\t\tISBN:  \t\t\t" << isbn << endl;
    cout << "\t\t\tTitle:  \t\t" << title << endl;
    cout << "\t\t\tPages:  \t\t" << numberOfPages << endl;
    cout << "\t\t\tAuthor:  \t\t" << authorName << endl;
    cout << "\t\t\tEdition:  \t\t" << editionNumber << endl;
    cout << "\t\t\tEdition Year:  \t\t" << editionYear << endl;
}
