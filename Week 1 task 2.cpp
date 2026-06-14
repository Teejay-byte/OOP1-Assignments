#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    float theory, practical, average;
    cout << "Enter name, theory marks, and practical marks: ";
    cin >> name >> theory >> practical;
    average = (theory + practical) / 2; // [cite: 29]
    cout << "Average: " << average << (average >= 50 ? " Passed" : " Failed") << endl; // [cite: 31, 32]
    return 0;
}