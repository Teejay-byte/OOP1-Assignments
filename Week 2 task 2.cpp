#include <iostream>
using namespace std;

int main() {
    int age, score;
    cout << "Enter age and score: "; cin >> age >> score;
    if (age >= 18) { // [cite: 57]
        if (score >= 50) cout << "Admitted"; // [cite: 58, 59]
        else cout << "Not Admitted: Low Score"; // [cite: 60]
    } else cout << "Not Admitted: Underage"; // [cite: 61]
    return 0;
}