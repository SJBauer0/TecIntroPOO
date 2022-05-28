#include <iostream>
using namespace std;

class librarian{
    private:

    public:
    string bookList;

    void changeAvail(string);
    void changeGenre();
    void booktitles();

};

librarian library(string bookList){
    string list = bookList;
};