#include<iostream>
#include<cmath>
using namespace std;

// Global constant for pi
const float PI = 3.14;

// Class representing different shapes
class Shape {
public:
    // Function to calculate area of a circle
    float area(int radius) {
        return (float(radius * radius) * PI);
    }

    // Function to calculate area of a rectangle
    float area(float length, float width) {
        return length * width;
    }

    // Function to calculate area of a triangle
    float area(float base, int height) {
        return (0.5) * (base * float(height));
    }

    // Function to calculate perimeter of a circle
    float perimeter(int radius) {
        return (2 * float(radius) * PI);
    }

    // Function to calculate perimeter of a rectangle
    float perimeter(float length, float width) {
        return (2 * length) + (2 * width);
    }

    // Function to calculate perimeter of a triangle
    float perimeter(float base, int height) {
        float hypotenuse = sqrt((base * base) + float(height * height));
        return (hypotenuse + base + height);
    }
};

int main() {
    Shape shape;

    // Circle
    cout << "\n-------CIRCLE--------\n";
    int radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << shape.area(radius) << endl;
    cout << "Perimeter of the circle: " << shape.perimeter(radius) << endl;

    // Rectangle
    cout << "\n-------RECTANGLE--------\n";
    float length, width;
    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;
    cout << "Area of the rectangle: " << shape.area(length, width) << endl;
    cout << "Perimeter of the rectangle: " << shape.perimeter(length, width) << endl;

    // Triangle
    cout << "\n-------TRIANGLE--------\n";
    float base;
    int height;
    cout << "Enter base of the triangle: ";
    cin >> base;
    cout << "Enter height of the triangle: ";
    cin >> height;
    cout << "Area of the triangle: " << shape.area(base, height) << endl;
    cout << "Perimeter of the triangle: " << shape.perimeter(base, height) << endl;

    return 0;
}
