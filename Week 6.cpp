#include <iostream>
using namespace std;

class Book {
public:
    string title, author; int copies;
    void inputDetails() { cout << "Enter title, author, copies: "; cin >> title >> author >> copies; }
    void borrowBook() { if(copies > 0) copies--; } // [cite: 173]
    void displayDetails() { cout << title << " Copies left: " << copies; }
};

int main() {
    Book b;
    b.inputDetails(); // [cite: 175]
    b.borrowBook();   // [cite: 176]
    b.displayDetails(); // [cite: 177]
    return 0;
}