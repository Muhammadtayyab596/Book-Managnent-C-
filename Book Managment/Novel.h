#ifndef Included_Novel_H
#define Included_Novel_H
#include<string>
#include"Book.h"
using namespace std;
class Novel : public Book
{
private:
    bool sequelsAwaiting;
public:
    Novel();
    Novel(double, string, int, string, int, int, bool);
    void updateEdition(double, int, int, int);
    void printData();
};
#endif
