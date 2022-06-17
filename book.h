/*
 *
 * Proyecto Libraria
 * Sebastian Jimenez Bauer
 * A01708830
 * 15/06/2022
 * version: 1
 * Esta clase defina objeto de tipo Book que contiene las clases heredadas
 * Libro, Magazine y Encyclopedia.
 */

#define BOOK_H_
#ifdef BOOK_H_


#include <iostream>

#include <string>

#include <sstream>

using namespace std;

//Declaracion de clase empleado que es abstracta
class book{

   //Declaro variables de instancia
    protected:
        string genre;
        string author;
        string title;
        int idn;
        bool available;
        int chapter;
        
        
    public:
            //Declaro los métodos que va a tener el objeto
            bool change0av();
            bool change1av();

            //constructor por defualt
            book() : idn(0) , genre(""), author (""), title (""), available (true), chapter(0) {};
            book(int idn, string genre, string author, string title, bool available, int chapter):
            idn(idn), genre(genre),title(title), author(author),available(available), chapter(chapter){};

            //método abstracto será sobreescrito
            virtual string to_string() = 0;
};

//Declaro objeto libro que hereda de book
class libro: public book{
    protected:

        //Variables de instancia del objeto
        int chapter;

    public:
        //constructor del objeto
        libro() : book(0 , "",  "",  "",  "", true){};
        libro(int idn, string genre, string author, string title, bool available, int chapter):
        book(idn, genre,title, author,available, chapter), chapter(chapter){};
        
        //Metodos del objeto
        int get_id(){return idn;}
        string get_genre(){return genre;}
        string get_title(){return title;}
        string get_author(){return author;}
        bool get_av(){return available;}
        int get_chapter(){return chapter;}
        string to_string();
        bool changeav();

};

//Declaro objeto magazine que hereda de book
class magazine: public book{
    protected:
        //Declaro variables de instancia
        int volume;

    public:

        //Constructores del objeto
        magazine() : book(0 , "",  "",  "",  "", true){};
        magazine(int idn, string genre, string author, string title, bool available, int volume):
        book(idn, genre,title, author,available, volume), volume(volume){};

        //Declaro los métodos que va a tener el objeto
        int get_id(){return idn;}
        string get_genre(){return genre;}
        string get_title(){return title;}
        string get_author(){return author;}
        bool get_av(){return available;}
        int get_vol(){return volume;}
        string to_string();
};

//Declaro objeto encyclopedia que hereda de book
class encyclopedia: public book{
    protected:
        //Declaro variables de instancia
        int part;

    public:

        //Constructores del objeto
        encyclopedia() : book(0 , "",  "",  "",  "", true){};
        encyclopedia(int idn, string genre, string author, string title, bool available, int part):
        book(idn, genre,title, author,available, part), part(part){};

        //Metodos del objeto
        int get_id(){return idn;}
        string get_genre(){return genre;}
        string get_title(){return title;}
        string get_author(){return author;}
        bool get_av(){return available;}
        int get_part(){return part;}
        string to_string();

};

/**
 * to_string convierte a atributos de las classes a string.
 *
 * junta todos los valores de los atributos en un string para ser impreso
 *
 * @param
 * @return string con los valores y texto juntado.
 */

string libro::to_string() {

  stringstream aux;
  aux << "Id: " << idn << "\n" << "Genero: " << genre << "\n" << "Titulo: " << title << "\n" <<
    "Autor: " << author << "\n" << "Disponible: " << available << "\n" << "Capitulo: " << chapter << "\n" << endl;
  return aux.str();
};

string magazine::to_string() {

  stringstream aux;
  aux << "Id: " << idn << "\n" << "Genero: " << genre << "\n" << "Titulo: " << title << "\n" << 
    "Autor: " << author << "\n" << "Disponible: " << available << "\n" << "Volumen: " << volume << "\n"<< endl;
  return aux.str();
};

string encyclopedia::to_string() {

  stringstream aux;
  aux << "Id: " << idn << "\n" << "Genero: " << genre << "\n" << "Titulo: " << title << "\n"
    "Autor: " << author << "\n" << "Disponible: " << available << "\n" << "Parte: " << part << "\n"<< endl;
  return aux.str();
};

//Decalaro funcion de libro
bool book::change0av(){

    available = 0;

    return available;

};

//Decalaro funcion de libro
bool book::change1av(){

    available = 1;

    return available;

};

#endif