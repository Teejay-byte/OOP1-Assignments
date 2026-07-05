#include <iostream>
#include <string>

using namespace std;

// Base Class
class Vehicle {
public:
    string brand;
    int yearOfManufacture;

    // Member function in base class
    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Year of Manufacture: " << yearOfManufacture << endl;
    }
};

// Derived Class inheriting from Vehicle
class Car : public Vehicle {
public:
    int numberOfDoors;
    int engineCapacity; 

    // Member function in derived class
    void displayCar() {
        // Display inherited attributes first
        displayVehicle();
        cout << "Number of Doors: " << numberOfDoors << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
    }
};

int main() {
    // 1. Create an object of the car class
    Car myCar;

    cout << "======================================" << endl;
    cout << "        VEHICLE LOGGING SYSTEM        " << endl;
    cout << "======================================" << endl;

    // 2. Input all details
    cout << "Enter Vehicle Brand: ";
    getline(cin, myCar.brand);
    
    cout << "Enter Year of Manufacture: ";
    cin >> myCar.yearOfManufacture;
    
    cout << "Enter Number of Doors: ";
    cin >> myCar.numberOfDoors;
    
    cout << "Enter Engine Capacity (in cc, e.g., 2000): ";
    cin >> myCar.engineCapacity;

    // 3. Display all details using the derived class function
    cout << "\n--- Car Record ---" << endl;
    myCar.displayCar();
    cout << "======================================" << endl;

    return 0;
}