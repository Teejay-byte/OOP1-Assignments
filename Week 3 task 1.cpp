#include <iostream>
using namespace std;

void getEmployeeDetails(string &n, float &b, float &o) {
    cout << "Enter name, basic salary, overtime hours: "; cin >> n >> b >> o;
}
float calculateOvertimePay(float hours) { return hours * 100; } // Assuming rate 100 [cite: 87]
float calculateNetSalary(float b, float oPay) { return b + oPay; } // [cite: 87]
void displayPayslip(string n, float b, float nS) { cout << n << " Net: " << nS; } // [cite: 88]

int main() {
    string n; float b, o, oP, nS;
    getEmployeeDetails(n, b, o);
    oP = calculateOvertimePay(o);
    nS = calculateNetSalary(b, oP);
    displayPayslip(n, b, nS); // [cite: 89]
    return 0;
}