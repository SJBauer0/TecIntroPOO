#include <iostream>

#include <sstream>

#include "book.h"

#include "libraryDataBase.h"

using namespace std;

int main(){

        libraryDataBase libraryDataBase;
        libraryDataBase.add_encycl(0, "Dictionary", "Chinese Dictionary", "Beijing University", "True", 1);
        libraryDataBase.crea_ejemplos();
        libraryDataBase.muestra_ejemplo();
        book book;
        book.changeAvail(false);
        cout << &libraryDataBase.books[1];
        return 0;
        
};
