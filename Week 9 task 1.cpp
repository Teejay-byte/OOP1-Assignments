#include <iostream>
#include <string>

using namespace std;

// Base Class
class Person {
public:
    string name;
    int age;

    // Member function in base class
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived Class inheriting from Person
class Student : public Person {
public:
    string admissionNumber;
    string studentClass;

    // Member function in derived class
    void displayStudent() {
        // Calling the inherited display function first
        displayPerson();
        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Class: " << studentClass << endl;
    }
};

int main() {
    // 1. Create an object of the student class
    Student student1;

    cout << "======================================" << endl;
    cout << "      SCHOOL MANAGEMENT SYSTEM        " << endl;
    cout << "======================================" << endl;

    // 2. Input all details
    cout << "Enter Student Name: ";
    getline(cin, student1.name);
    
    cout << "Enter Student Age: ";
    cin >> student1.age;
    cin.ignore(); // Clear the newline character from the buffer
    
    cout << "Enter Admission Number: ";
    getline(cin, student1.admissionNumber);
    
    cout << "Enter Class: ";
    getline(cin, student1.studentClass);

    // 3. Display all details using the derived class function
    cout << "\n--- Student Record ---" << endl;
    student1.displayStudent();
    cout << "======================================" << endl;

    return 0;
}