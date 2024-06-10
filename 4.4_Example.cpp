#include <iostream>
using namespace std; 


class Circle {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Method to get the area
    double getArea() {
        return 3.14159265358979323846 * radius * radius;
    }
};

int main() {
    // Create a Circle object
    Circle circle(5.0);

    // Access the area through a public method
    double area = circle.getArea();

    cout << "Circle Area: " << area << endl;

    // Attempting to access 'radius' directly would result in a compile-time error

    // cout<< "The radius is " << circle.radius << endl; 

    return 0;
}