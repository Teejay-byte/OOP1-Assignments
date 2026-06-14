#include <iostream>
using namespace std;

int main() {
    string name; int marks;
    cout << "Enter name and marks: "; cin >> name >> marks;
    if (marks >= 70) cout << "Grade: A";
    else if (marks >= 60) cout << "Grade: B";
    else if (marks >= 50) cout << "Grade: C";
    else if (marks >= 40) cout << "Grade: D";
    else cout << "Grade: E"; // [cite: 40, 41, 42, 43, 44, 45]
    return 0;
}