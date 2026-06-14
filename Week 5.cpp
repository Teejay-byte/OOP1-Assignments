#include <iostream>
using namespace std;

int main() {
    float rev[7], total = 0;
    for(int i=0; i<7; i++) {
        cout << "Enter revenue for day " << i+1 << ": "; cin >> rev[i];
        total += rev[i];
    }
    cout << "Total: " << total << " Average: " << total/7 << endl; // [cite: 150, 151]
    return 0;
}