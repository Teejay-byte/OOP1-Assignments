#include <iostream>
using namespace std;

int main() {
    double n1, n2; char op;
    cout << "Enter num1, operator, num2: "; cin >> n1 >> op >> n2;
    switch(op) { // [cite: 69]
        case '+': cout << n1 + n2; break;
        case '-': cout << n1 - n2; break;
        case '*': cout << n1 * n2; break;
        case '/': (n2 != 0) ? cout << n1 / n2 : cout << "Error"; break; // [cite: 73]
    }
    return 0;
}