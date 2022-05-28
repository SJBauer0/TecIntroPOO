#include <iostream>
using namespace std;

class libraryDataBase{
    private:

    public:

        string libraryName;
        void deleteBook();
        void addBook();
        void searchBook();

    libraryDataBase(string libraryName);
};

libraryDataBase library(string name){
    string libraryName = name;
};


