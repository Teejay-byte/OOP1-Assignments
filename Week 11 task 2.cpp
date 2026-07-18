#include <iostream>
#include <string>

// i) Create a class named Student with private data members
class Student {
private:
    std::string studentName;   // Protected from direct external access[cite: 1]
    std::string admissionNumber; // Protected from direct external access[cite: 1]
    double feeBalance;         // Protected from direct external access[cite: 1]

public:
    // ii) Public member function to input student details[cite: 1]
    void inputStudentData() {
        std::cout << "Enter student name: ";
        std::getline(std::cin >> std::ws, studentName); // Handles full names with spaces
        
        std::cout << "Enter admission number: ";
        std::cin >> admissionNumber;
        
        std::cout << "Enter total fee balance (KSh): ";
        std::cin >> feeBalance;
    }

    // ii) Public member function to reduce fee balance when a payment is made[cite: 1]
    void makePayment(double amount) {
        if (amount > 0) {
            feeBalance -= amount; // Safely reduces the balance[cite: 1]
            std::cout << "Transaction Successful: KSh " << amount << " credited." << std::endl;
        } else {
            std::cout << "Error: Invalid payment amount." << std::endl;
        }
    }

    // ii) Public member function to show student details and remaining balance[cite: 1]
    void displayStatus() {
        std::cout << "\n====================================" << std::endl;
        std::cout << "       STUDENT FEE STATUS REPORT     " << std::endl;
        std::cout << "====================================" << std::endl;
        std::cout << "Student Name:     " << studentName << std::endl;
        std::cout << "Admission Number: " << admissionNumber << std::endl;
        std::cout << "Remaining Fee:   KSh " << feeBalance << std::endl;
        std::cout << "====================================" << std::endl;
    }
};

int main() {
    // iv) Create an object of the class[cite: 1]
    Student studentObj;

    // iv) Allow the user to input student details[cite: 1]
    std::cout << "--- Registering New Student Fee Record ---" << std::endl;
    studentObj.inputStudentData();

    // iv) Process a fee payment[cite: 1]
    double payment;
    std::cout << "\nEnter fee amount to pay (KSh): ";
    std::cin >> payment;
    studentObj.makePayment(payment);

    // iv) Display updated fee status[cite: 1]
    studentObj.displayStatus();

    return 0;
}