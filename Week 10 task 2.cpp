#include <iostream>

using namespace std;

// Base Class
class Shape {
public:
    // Virtual function for run-time polymorphism
    virtual void draw() {
        cout << "Drawing a generic shape" << endl;
    }
};

// Derived Class: Circle
class Circle : public Shape {
public:
    // Notice: Removed the 'override' keyword to ensure backward compatibility
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

// Derived Class: Rectangle
class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing Rectangle" << endl;
    }
};

// Derived Class: Triangle
class Triangle : public Shape {
public:
    void draw() {
        cout << "Drawing Triangle" << endl;
    }
};

int main() {
    // 1. Create objects of each derived class
    Circle myCircle;
    Rectangle myRectangle;
    Triangle myTriangle;

    // 2. Create a single base class pointer
    Shape* shapePtr;

    cout << "======================================" << endl;
    cout << "         SHAPE DRAWING SYSTEM         " << endl;
    cout << "======================================" << endl;

    // 3. Point to Circle and execute its specific draw function
    shapePtr = &myCircle;
    shapePtr->draw();

    // 4. Point to Rectangle and execute
    shapePtr = &myRectangle;
    shapePtr->draw();

    // 5. Point to Triangle and execute
    shapePtr = &myTriangle;
    shapePtr->draw();

    return 0;
}