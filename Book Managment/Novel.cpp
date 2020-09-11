#include<iostream>
#include"Novel.h"
using namespace std;
Novel::Novel()
{
}
Novel::Novel(double i, string t, int p, string n, int ed, int y, bool s) : Book(i, t, p, n, ed, y)
{
    sequelsAwaiting = s;
}
void Novel::updateEdition(double i, int p, int y, int seq)
{
    editionNumber++;
    isbn = i;
    numberOfPages = p;
    editionYear = y;
    sequelsAwaiting = seq;
}
void Novel::printData()
{
    cout << "\n\t\t\t*********    Novel's Data    *********\n";
    Book::printData();
    cout << "\t\t\tSequels Awaited:  \t" << (sequelsAwaiting ? "Yes" : "No") << endl;
    cout << "\t\t\t-------------------------------------\n\n";
}

