#define LIBRARYDB_H_
#ifdef LIBRARYDB_H_

#include <iostream>

#include <sstream>

using namespace std;
const int MAX = 1000;

class libraryDataBase{
    protected:

    public:

        book * books[MAX];
        int idn;
        libraryDataBase() : idn(0) {};
        void add_book(int id, string genre, string title, string author, bool available, int chapter);
        void add_mag(int id, string genre, string title, string author, bool available, int volume);
        void add_encycl(int id, string genre, string title, string author, bool available, int part);
        void crea_ejemplos();
        void muestra_ejemplo();

};


void libraryDataBase::crea_ejemplos(){

    books[idn] = new book(idn,"Fantasy","JRR Tolkien","The Lord of the Rings", true,4);
    idn++;
    books[idn] = new magazine (idn, "News","National Geographic","Nature", true,5);
    idn++;
    books[idn] = new encyclopedia (idn,"Vocab","Oxford","World of Vocab", true,9);
    idn++;
    books[idn] = new book(idn,"Fantasy","Herbert","Dune", true,1);
    idn++;
    books[idn] = new magazine (idn, "Animal","National Geographic","Animals", true,5);
    idn++;
    books[idn] = new encyclopedia (idn,"Vocab","Stanford","Engineers Handbook", true,9);
    idn++;

};

void libraryDataBase::muestra_ejemplo() {

  for (int i = 0; i < idn; i++)
    cout << books[i] -> to_string();
}

void libraryDataBase::add_book(int id, string genre, string title, string author, bool available, int chapter){

    books[idn] = new book(idn,genre,title,author,available,chapter);
    idn++;

};

void libraryDataBase::add_mag(int idn, string genre, string title, string author, bool available, int volume){

    books[idn] = new magazine(idn,genre,title,author,available,volume);
    idn++;

};

void libraryDataBase::add_encycl(int id, string genre, string title, string author, bool available, int part){

    books[idn] = new encyclopedia(idn,genre,title,author,available,part);
    idn++;

};

#endif