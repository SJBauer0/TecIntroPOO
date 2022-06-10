#define BOOK_H_
#ifdef BOOK_H_


#include <iostream>

#include <string>

#include <sstream>

using namespace std;

class book{
    protected:
        string genre;
        string author;
        string title;
        int id;
        bool available;
        int chapter;

        
    public:
            //virtual bool changeAvail(bool available);
            book() : id(0) , genre(""), author (""), title (""), available (true), chapter(0) {};
            book(int id, string genre, string author, string title, bool available, int chapter):
            id(id), genre(genre),title(title), author(author),available(available), chapter(chapter){};
            int get_chapter(){return chapter;}
            virtual string to_string() = 0;

};

class libro: public book{
    protected:
        int chapter;
    public:

        libro() : book(0 , "",  "",  "",  "", true){};
        libro(int id, string genre, string author, string title, bool available, int chapter):
        book(id, genre,title, author,available, chapter), chapter(chapter){};


        int get_id(){return id;}
        string get_genre(){return genre;}
        string get_title(){return title;}
        string get_author(){return author;}
        bool get_av(){return available;}
        int get_chapter(){return chapter;}
        string to_string();
};

class magazine: public book{
    protected:
        int volume;

    public:

        magazine() : book(0 , "",  "",  "",  "", true){};
        magazine(int id, string genre, string author, string title, bool available, int volume):
        book(id, genre,title, author,available, volume), volume(volume){};


        int get_id(){return id;}
        string get_genre(){return genre;}
        string get_title(){return title;}
        string get_author(){return author;}
        bool get_av(){return available;}
        int get_vol(){return volume;}
        string to_string();
};

class encyclopedia: public book{
    protected:
        int part;

    public:

        encyclopedia() : book(0 , "",  "",  "",  "", true){};
        encyclopedia(int id, string genre, string author, string title, bool available, int part):
        book(id, genre,title, author,available, part), part(part){};

        int get_id(){return id;}
        string get_genre(){return genre;}
        string get_title(){return title;}
        string get_author(){return author;}
        bool get_av(){return available;}
        int get_part(){return part;}
        string to_string();

};

string libro::to_string() {

  stringstream aux;
  aux << "Id: " << id << "\n" << "Genero: " << genre << "\n" << "Titulo: " << title << "\n" <<
    "Autor: " << author << "\n" << "Disponible: " << available << "\n" << "Capitulo: " << chapter << "\n" << endl;
  return aux.str();
};

string magazine::to_string() {

  stringstream aux;
  aux << "Id: " << id << "\n" << "Genero: " << genre << "\n" << "Titulo: " << title << "\n" << 
    "Autor: " << author << "\n" << "Disponible: " << available << "\n" << "Volumen: " << volume << "\n"<< endl;
  return aux.str();
};

string encyclopedia::to_string() {

  stringstream aux;
  aux << "Id: " << id << "\n" << "Genero: " << genre << "\n" << "Titulo: " << title << "\n"
    "Autor: " << author << "\n" << "Disponible: " << available << "\n" << "Parte: " << part << "\n"<< endl;
  return aux.str();
};

/* bool book::changeAvail(bool available){
    if (available == true) {

            available = false;

    };

    if (available == false) {

            available = true;

    };

    return available;
};
*/

#endif