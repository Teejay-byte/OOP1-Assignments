#include <iostream>
#include <string>

// i) Create an abstract class named MedicalStaff[cite: 1]
class MedicalStaff {
protected:
    // Protected attributes accessible by derived classes[cite: 1]
    std::string staffName; //[cite: 1]
    std::string staffID;   //[cite: 1]

public:
    // Constructor to initialize the attributes
    MedicalStaff(std::string name, std::string id) : staffName(name), staffID(id) {}

    // Virtual destructor for safe memory cleanup
    virtual ~MedicalStaff() {}

    // ii) Pure virtual function - makes this class abstract[cite: 1]
    virtual double calculateSalary() = 0; //[cite: 1]

    // iii) Non-virtual function to display staff name and ID[cite: 1]
    void displayDetails() {
        std::cout << "Staff ID:   " << staffID << std::endl;
        std::cout << "Staff Name: " << staffName << std::endl;
    }
};

// iv) Create derived class: Doctor[cite: 1]
class Doctor : public MedicalStaff {
private:
    double basicSalary;
    double allowance;

public:
    Doctor(std::string name, std::string id, double basic, double allow)
        : MedicalStaff(name, id), basicSalary(basic), allowance(allow) {}

    // Doctor salary includes basic salary + allowance[cite: 1]
    double calculateSalary() {
        return basicSalary + allowance; //[cite: 1]
    }
};

// iv) Create derived class: Nurse[cite: 1]
class Nurse : public MedicalStaff {
private:
    double basicSalary;
    double overtimePay;

public:
    Nurse(std::string name, std::string id, double basic, double ot)
        : MedicalStaff(name, id), basicSalary(basic), overtimePay(ot) {}

    // Nurse salary includes basic salary + overtime pay[cite: 1]
    double calculateSalary() {
        return basicSalary + overtimePay; //[cite: 1]
    }
};

int main() {
    // v) Use a base class pointer - Swapped to NULL for C++98 compatibility[cite: 1]
    MedicalStaff* staffPtr = NULL; //[cite: 1]

    // v) Create objects of both derived classes[cite: 1]
    Doctor doc("Dr. Mwangi", "DOC-023", 220000.00, 45000.00); //[cite: 1]
    Nurse nurse("Sister Atieno", "NUR-105", 85000.00, 12500.00); //[cite: 1]

    std::cout << "--- Hospital Staff Payroll Report ---\n" << std::endl;

    // v) Demonstrate runtime behavior using abstraction with the Doctor object[cite: 1]
    staffPtr = &doc; //[cite: 1]
    staffPtr->displayDetails(); //[cite: 1]
    std::cout << "Calculated Net Salary: KSh " << staffPtr->calculateSalary() << std::endl; //[cite: 1]
    std::cout << "------------------------------------" << std::endl;

    // v) Demonstrate runtime behavior using abstraction with the Nurse object[cite: 1]
    staffPtr = &nurse; //[cite: 1]
    staffPtr->displayDetails(); //[cite: 1]
    std::cout << "Calculated Net Salary: KSh " << staffPtr->calculateSalary() << std::endl; //[cite: 1]
    std::cout << "------------------------------------" << std::endl;

    return 0;
}