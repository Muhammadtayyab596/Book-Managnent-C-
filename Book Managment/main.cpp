#include <iostream>
#include"Book.h"
#include"Author.h"
#include"Novel.h"
#include"Textbook.h"
using namespace std;

int main()
{

    Author fsf("F. Scott Fitzgerald");
    Author jk("JK Rowling");
    Author rl("Robert Lafore");

    Novel hp(123, "Harry Potter", 457, jk.publish(), 5, 1999, true);
    Textbook tb(123456, "OOP in C++", 350, rl.publish(), 12, 2003, 17);
    Novel tgg(3536, "The Great Gatsby", 160, fsf.publish(), 2, 1986, false);

    hp.updateEdition(124, 500, 2001, false);
    tb.updateEdition(123457, 400, 2005, 18);


    Novel n = jk.publishNovel(353, "A Casual Vacancy", 340, 2016, false);
    Textbook t = rl.publishTextBook(84678, "OOP in Java", 500, 2013, 21);

    fsf.printData();
    jk.printData();
    rl.printData();
    hp.printData();
    tb.printData();
    tgg.printData();
    n.printData();
    t.printData();

    return 0;
}
