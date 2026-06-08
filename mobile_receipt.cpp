#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // i. Declare variables to store details
    string customerName;
    string phoneModel;
    int quantity;
    double pricePerPhone;
    double totalSalesAmount;

    // ii. Prompt user to enter details
    cout << "=========================================" << endl;
    cout << "  MOBILE PHONE SALES RECORD SYSTEM       " << endl;
    cout << "=========================================" << endl;
    
    cout << "Enter Customer Name: ";
    getline(cin, customerName); // Captures full name with spaces cleanly
    
    cout << "Enter Phone Model Purchased: ";
    getline(cin, phoneModel);
    
    cout << "Enter Quantity Bought: ";
    cin >> quantity;
    
    cout << "Enter Price Per Phone (Ksh): ";
    cin >> pricePerPhone;

    // ii. Calculate total sales amount using the formula
    totalSalesAmount = quantity * pricePerPhone;

    // iii. Display a well-formatted receipt
    cout << "\n-----------------------------------------" << endl;
    cout << "             SALES RECEIPT               " << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Customer Name:  " << customerName << endl;
    cout << "Phone Model:    " << phoneModel << endl;
    cout << "Quantity:       " << quantity << endl;
    cout << "Price per Unit: Ksh " << fixed << setprecision(2) << pricePerPhone << endl;
    cout << "-----------------------------------------" << endl;
    cout << "TOTAL AMOUNT:   Ksh " << totalSalesAmount << endl;
    cout << "=========================================" << endl;

    return 0;
}