/*
 *
 * Proyecto Libraria
 * Sebastian Jimenez Bauer
 * A01708830
 * 15/06/2022
 * versio : 1
 * Esta clase defina objeto de tipo libraryDataBase que contiene todas las operaciones
 * para la clase de book y poder modificar los contenidos de LibraryDataBase
 */
#define LIBRARYDB_H_
#ifdef LIBRARYDB_H_

#include <iostream>

#include <sstream>

using namespace std;
const int MAX = 1000; //constante de tamaño de arreglos

class libraryDataBase{
    protected:

    public:
        //Declaro constructor por default y metodos públicos.

        book * books[MAX];//se define como apuntador para usar polimorfismo
        int idn;
        
        //Declaro los métodos que va a tener el objeto

        libraryDataBase() : idn(0) {};//constructor por defualt
        void add_book(int idn, string genre, string title, string author, bool available, int chapter);
        void add_mag(int idn, string genre, string title, string author, bool available, int volume);
        void add_encycl(int idn, string genre, string title, string author, bool available, int part);
        void crea_ejemplos();
        void muestra_ejemplo();
        void muestra_unejemplo(int i);
        void checkout(int i);
        void checkin(int i);
        void deletecontent(int i);

};


void libraryDataBase::crea_ejemplos(){

    //new crea el objeto en tiempo de ejecución para usar polimorfismo
    books[idn] = new libro(idn,"Fantasy","JRR Tolkien","The Lord of the Rings", true,4);
    idn++;
    books[idn] = new magazine (idn, "News","National Geographic","Nature", true,5);
    idn++;
    books[idn] = new encyclopedia (idn,"Vocab","Oxford","World of Vocab", true,9);
    idn++;
    books[idn] = new libro(idn,"Fantasy","Herbert","Dune", true,1);
    idn++;
    books[idn] = new magazine (idn, "Animal","National Geographic","Animals", true,5);
    idn++;
    books[idn] = new encyclopedia (idn,"Vocab","Stanford","Engineers Handbook", true,9);
    idn++;

};

/**
 * muestra_ejemplo imprime contenidos
 *
 * utiliza el arreglo books[] y el número de id, para recorre todo el
 * arreglo imprimiendo cada uno de los objetos con su método to_string().
 *
 * @param
 * @return
 */


//Ciclo que recorre el arreglo e imprime cada objeto.
void libraryDataBase::muestra_ejemplo() {

  for (int i = 0; i < idn; i++)
    cout << books[i] -> to_string();
};

//Funcion que imprime un objeto.
void libraryDataBase::muestra_unejemplo(int i) {
    cout << books[i] -> to_string();
};

//Funcion que cambia la disponibilidad de un objeto
void libraryDataBase::checkout(int i) {
    books[i] -> change0av();
    cout << books[i] -> to_string();
};

//Funcion que cambia la disponibilidad de un objeto
void libraryDataBase::checkin(int i) {
    books[i] -> change1av();
    cout << books[i] -> to_string();
};

//Funciones que contruyen un objeto nuevo de la clase
void libraryDataBase::add_book(int idn, string genre, string title, string author, bool available, int chapter){

    books[idn] = new libro(idn,genre,title,author,available,chapter);
    idn++;

};

void libraryDataBase::add_mag(int idn, string genre, string title, string author, bool available, int volume){

    books[idn] = new magazine(idn,genre,title,author,available,volume);
    idn++;

};

void libraryDataBase::add_encycl(int idn, string genre, string title, string author, bool available, int part){

    books[idn] = new encyclopedia(idn,genre,title,author,available,part);
    idn++;

};



#endif