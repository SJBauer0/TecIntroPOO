#include <iostream>
using namespace std;

class Orders{
    private:

    public:

        string studentName;
        int date;
        string bookTitle;
        int id;

        void checkAvailable();
        void addOrder();
        void deleteOrder();

    Orders(string studentName, int date, string bookTitle, int id);

};
