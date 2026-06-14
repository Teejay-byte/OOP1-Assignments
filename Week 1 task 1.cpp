#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, model;
    int quantity;
    float price;

    cout << "Enter customer name: "; cin >> name;
    cout << "Enter phone model: "; cin >> model;
    cout << "Enter quantity bought: "; cin >> quantity;
    cout << "Enter price per phone: "; cin >> price;

    float total = quantity * price; // [cite: 21]

    cout << "\n--- Receipt ---\nName: " << name << "\nModel: " << model 
         << "\nQuantity: " << quantity << "\nPrice: " << price 
         << "\nTotal: " << total << endl; // [cite: 22]
    return 0;
}