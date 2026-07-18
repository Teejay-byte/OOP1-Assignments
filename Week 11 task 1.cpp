#include <iostream>
#include <string>

// i) Create a class named Employee with private data members
class Employee {
private:
    std::string employeeName; // Private attribute for security
    std::string employeeID;   // Private attribute for security[cite: 1]
    double basicSalary;       // Private attribute for security[cite: 1]

public:
    // ii) Public member function to input and assign values to the data members[cite: 1]
    void setEmployeeDetails() {
        std::cout << "Enter employee name: ";
        std::getline(std::cin >> std::ws, employeeName); // ws discards leading whitespace
        
        std::cout << "Enter employee ID: ";
        std::cin >> employeeID;
        
        std::cout << "Enter basic salary (KSh): ";
        std::cin >> basicSalary;
    }

    // ii) Public member function to compute net salary after adding a 10% allowance[cite: 1]
    double calculateSalary() {
        // Formula: Net Salary = Basic Salary + 0.10 * Basic Salary[cite: 1]
        return basicSalary + (0.10 * basicSalary);
    }

    // ii) Public member function to display employee information and net salary[cite: 1]
    void displayEmployeeDetails() {
        std::cout << "\n====================================" << std::endl;
        std::cout << "      EMPLOYEE DETAILS REPORT       " << std::endl;
        std::cout << "====================================" << std::endl;
        std::cout << "Employee Name: " << employeeName << std::endl;
        std::cout << "Employee ID:   " << employeeID << std::endl;
        std::cout << "Basic Salary:  KSh " << basicSalary << std::endl;
        std::cout << "Net Salary:    KSh " << calculateSalary() << " (Includes 10% Allowance)" << std::endl;
        std::cout << "====================================" << std::endl;
    }
};

int main() {
    // iii) Create an object of the class[cite: 1]
    Employee emp;

    // iii) Set employee details[cite: 1]
    std::cout << "--- Input Employee Information ---" << std::endl;
    emp.setEmployeeDetails();

    // iii) Display the employee details[cite: 1]
    emp.displayEmployeeDetails();

    return 0;
}