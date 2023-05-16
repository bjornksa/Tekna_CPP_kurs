#include <string>
#include <iostream>
using namespace std;

struct Book{
    string title;
    string author;
    int pages;
    int year;
}; // <- Husk semikolon her

int main(){

    Book lotr{"The Lord of the Rings", "J.R.R. Tolkien", 1254, 1954};

    Book cpp;
    cpp.title = "Programming Principles and Practice Using C++";
    cpp.author = "Bjarne Stroustrup";
    cpp.pages = 730;
    cpp.year = 2014;

    cout << lotr.title << endl;

    return 0;
}
