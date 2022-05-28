#include <iostream>
using namespace std;

class book{
    private:

    public:
            string genre;
            string author;
            string title;
            int id;
            string available;
            void changeAvail(string available);
            string changeGenre(string genre);
        
        book(string genre, string author, string title, int id, string available);

};

class magazine: public book{
    private:


    public:
        int volume;

        magazine(string genre, string author, string title, int id, string available, int volume);

};

class encyclopedia: public book{
    private:

    public:
            string subject;

        encyclopedia(string genre, string author, string title, int id, string available, string subject);

};


void book::changeAvail(string available){

};

string book::changeGenre(string genre){

};

book::book(string a, string b, string c, int d, string e){
        genre = a;
        author = b;
        title = c;
        id = d;
        available = e;
        
};

int main(){
        book book1("Fantasy", "JRR Tolkien", "The Lord of the Rings",9,"True");
        cout << book1.title << "\n";
        cout << book1.genre << "\n";
        cout << book1.author << "\n";
        cout << book1.id << "\n";
        cout << book1.available << "\n";
        return 0;
};
