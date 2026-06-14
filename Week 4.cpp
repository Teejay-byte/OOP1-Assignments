#include <iostream>
using namespace std;

int main() {
    string name; float salary;
    for(int i=0; i<5; i++) { // [cite: 109]
        cout << "Enter name and salary: "; cin >> name >> salary;
        float bonus = 0.05 * salary; // [cite: 113]
        cout << name << " Bonus: " << bonus << " Total: " << salary + bonus << endl; // [cite: 114]
    }
    return 0;
}