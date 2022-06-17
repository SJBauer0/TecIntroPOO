/*
 *
 * Proyecto Libraria
 * Sebastian Jimenez Bauer
 * A01708830
 * 15/06/2022
 * version: 1
 * Esta archivo existe para guardar la mayoria de las funciones
 * que se utiliza para empezar el proyecto y el menu del programa.
 */

#define ADMIN_H_
#ifdef ADMIN_H_

#include <iostream>

#include <string>

#include <sstream>

#include "book.h"  //biblioteca con mis objetos a usar

#include "libraryDataBase.h"  //biblioteca con mis objetos a usar

using namespace std;

void menu();

//Despliega el menu
void menu(){

        //Determina las variables
        int choice;
        void content();
        void change_av();
        void muestra_libro();
        void admin();

        cout<<"\n"<<"Bienvenido a la BiblioTEC!"<<"\n"<<"\n";

        cout<<"Escoge la opcion que desea: "<<"\n"<<"\n" "1. Ver contenidos"<<"\n"<<"2. Rentar un Libro"<<"\n"<<"3. Detalles de un libro"<<"\n"<<"4. Opciones para Administradores"<<"\n"<<"\n";

        { cout<<"Ingresa tu opcion.(1-4):"<<"\n";

        cin>>choice;

        //Determina la opcion que escoge el usuario
        switch (choice)
        {
        case 1: content(); break;
        case 2: change_av(); break;
        case 3: muestra_libro(); break;
        case 4: admin(); break;
        default: cout<<"Opcion Invalida"; break;
        };};   

}

//Despliega el Contenido actual de la biblioteca
void content(){
    libraryDataBase libraryDataBase;
    libraryDataBase.crea_ejemplos();
    libraryDataBase.muestra_ejemplo();
}

//Despliega el Contenido de un solo objecto
void muestra_libro(){
    libraryDataBase libraryDataBase;
    libraryDataBase.crea_ejemplos();
    int idn;
    cout<< "Selecciona el ID del Libro que quieras conseguir detalles: ";
    cin>> idn;
    libraryDataBase.muestra_unejemplo(idn);
};

//Llama la funcion para cambiar disponibilidad de un objeto
void change_av(){
    libraryDataBase libraryDataBase;
    libraryDataBase.crea_ejemplos();
    int idn;
    cout << "Selecciona el ID del Libro que quieras rentar : ";
    cin >> idn;
    libraryDataBase.checkout(idn);
    cout << "Listo el libro ya no esta disponible para rentar. Disfruta!"<<"\n";

};

//despliega opciones de Admin
void admin(){

        void agrega_libro();
        void regresa_libro();

        int choice;

        cout<<"Escoge la opcion que desea: "<<"\n"<<"\n" "1. Agrega Contenido"<<"\n"<<"2. Regresa Libro"<<"\n"<<"\n";

        { cout<<"Ingresa tu opcion.(1-2):"<<"\n";

        cin>>choice;

        switch (choice)
        {
        case 1: agrega_libro(); break;
        case 2: regresa_libro(); break;
        case 3:  ; break;
        default: cout<<"invalid"; break;
        };};
}

//despliega opciones para agregar un objeto
void agrega_libro(){

        void agrega_e();
        void agrega_l();
        void agrega_m();

        int choice;

        cout<<"Escoge el tipo de Contenido que vas a agregar: "<<"\n"<<"\n" "1. Agrega Libro"<<"\n"<<"2. Agrega Encyclopedia"<<"\n"<<"3. Agrega Revista"<<"\n"<<"\n";

        { cout<<"Ingresa tu opcion.(1-3):"<<"\n";

        cin>>choice;

        switch (choice)
        {
        case 1: agrega_l(); break;
        case 2: agrega_e(); break;
        case 3: agrega_m(); break;
        default: cout<<"invalid"; break;
        };};

};

//Llama la funcion para cambiar disponibilidad de un objeto
void regresa_libro(){
    libraryDataBase libraryDataBase;
    libraryDataBase.crea_ejemplos();
    int idn;
    cout << "Selecciona el ID del Libro que quieras regresar : ";
    cin >> idn;
    libraryDataBase.checkin(idn);
    cout << "Listo el libro ya esta disponible para rentar. Gracias!"<<"\n";

};

//Agrega libro
void agrega_l(){
    bool disponible = 1;

    cout << "Escribe el genero del libro: ";
    string genre;
    cin.ignore();
    getline(cin,genre);

    cout << "Escribe el titulo del libro: ";
    string title;
    cin.ignore();
    getline(cin,title);

    cout << "Escribe el autor del libro: ";
    string author;
    getline(cin,author);

    cout << "Escribe el NUMERO del capitulo del libro: ";
    int chapter;
    cin >> chapter;
    cout << "\n";

    libraryDataBase libraryDataBase;
    libraryDataBase.add_book(libraryDataBase.idn, genre, title,author, 1, chapter);
    libraryDataBase.idn++;
    libraryDataBase.crea_ejemplos();
    libraryDataBase.muestra_ejemplo();
};

//Agrega encyclopedia
void agrega_e(){
    bool disponible = 1;

    cout << "Escribe el genero de la Encyclopedia: ";
    string genre;
    cin.ignore();
    getline(cin,genre);

    cout << "Escribe el titulo de la Encyclopedia: ";
    string title;
    cin.ignore();
    getline(cin,title);

    cout << "Escribe el autor de la Encyclopedia: ";
    string author;
    getline(cin,author);

    cout << "Escribe el NUMERO de la Encyclopedia: ";
    int part;
    cin >> part;
    cout << "\n";

    libraryDataBase libraryDataBase;
    libraryDataBase.add_encycl(libraryDataBase.idn, genre, title,author, 1, part);
    libraryDataBase.idn++;
    libraryDataBase.crea_ejemplos();
    libraryDataBase.muestra_ejemplo();
};

//Agrega revista
void agrega_m(){

    bool disponible = 1;

    cout << "Escribe el genero de la Revista: ";
    string genre;
    cin.ignore();
    getline(cin,genre);

    cout << "Escribe el titulo de la Revista: ";
    string title;
    cin.ignore();
    getline(cin,title);

    cout << "Escribe el autor de la Revista: ";
    string author;
    getline(cin,author);

    cout << "Escribe el NUMERO de la Revista: ";
    int volume;
    cin >> volume;
    cout << "\n";

    libraryDataBase libraryDataBase;
    libraryDataBase.add_mag(libraryDataBase.idn, genre, title,author, 1, volume);
    libraryDataBase.idn++;
    libraryDataBase.crea_ejemplos();
    libraryDataBase.muestra_ejemplo();


};

#endif