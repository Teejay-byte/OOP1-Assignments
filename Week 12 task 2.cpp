#include <iostream>

// i) Create an abstract class named Shape //[cite: 1]
class Shape {
public:
    // Virtual destructor to ensure proper cleanup of derived objects
    virtual ~Shape() {}

    // Pure virtual function //[cite: 1]
    virtual double calculateArea() = 0; //[cite: 1]
};

// ii) Create derived class: Circle //[cite: 1]
class Circle : public Shape { //[cite: 1]
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // iii) Implement calculateArea() for Circle: Area = pi * r^2 //[cite: 1]
    double calculateArea() { //[cite: 1]
        return 3.14159 * radius * radius; //[cite: 1]
    }
};

// ii) Create derived class: Rectangle //[cite: 1]
class Rectangle : public Shape { //[cite: 1]
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // iii) Implement calculateArea() for Rectangle: Area = Length * Width //[cite: 1]
    double calculateArea() { //[cite: 1]
        return length * width; //[cite: 1]
    }
};

int main() {
    // iv) Use a base class pointer (Initialized to NULL for C++98 compatibility) //[cite: 1]
    Shape* shapePtr = NULL; //[cite: 1]

    // iv) Create objects of each shape //[cite: 1]
    Circle myCircle(7.0);          // Circle with a radius of 7 units
    Rectangle myRectangle(5.0, 8.0); // Rectangle with length 5 and width 8

    std::cout << "--- Shape Area System ---" << std::endl << std::endl;

    // iv) Point to Circle and call calculateArea() //[cite: 1]
    shapePtr = &myCircle; //[cite: 1]
    std::cout << "Circle Area (Radius 7): " << shapePtr->calculateArea() << std::endl; //[cite: 1]
    std::cout << "-----------------------------------" << std::endl;

    // iv) Point to Rectangle and call calculateArea() //[cite: 1]
    shapePtr = &myRectangle; //[cite: 1]
    std::cout << "Rectangle Area (5x8):   " << shapePtr->calculateArea() << std::endl; //[cite: 1]
    std::cout << "-----------------------------------" << std::endl;

    return 0;
}