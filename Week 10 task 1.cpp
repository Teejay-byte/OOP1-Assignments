#include <iostream>
#include <iomanip>

using namespace std;

class Payment {
public:
    // 1. Cash payment: Accepts an integer amount
    void processPayment(int amount) {
        cout << "--- Processing Cash Payment ---" << endl;
        cout << "Final Payment Amount: " << amount << " KSh\n" << endl;
    }

    // 2. Card payment: Accepts amount and transaction fee
    void processPayment(double amount, double transactionFee) {
        cout << "--- Processing Card Payment ---" << endl;
        double finalAmount = amount + transactionFee;
        cout << "Final Payment Amount: " << finalAmount << " KSh\n" << endl;
    }

    // 3. Mobile payment: Accepts amount, fee, and discount
    void processPayment(double amount, double fee, double discount) {
        cout << "--- Processing Mobile Payment ---" << endl;
        double finalAmount = (amount + fee) - discount;
        cout << "Final Payment Amount: " << finalAmount << " KSh\n" << endl;
    }
};

int main() {
    // Create an object of the class
    Payment myPayment;

    cout << "======================================" << endl;
    cout << "        MOBILE MONEY PAYMENT SYSTEM   " << endl;
    cout << "======================================" << endl;
    
    cout << fixed << setprecision(2);

    // Demonstrate all three types of payments using the exact same function name
    myPayment.processPayment(5000);                     // Cash
    myPayment.processPayment(5000.0, 150.0);            // Card
    myPayment.processPayment(5000.0, 100.0, 200.0);     // Mobile

    return 0;
}