#include <iostream>
using namespace std;

class Shape {
protected:
    double width;
    double height;

public:
    Shape(double w, double h) : width(w), height(h) {}

    double Area() const {
        return width * height;
    }

    // making a copy constructor here
    Shape operator+(const Shape& other) const {
        double newWidth = width + other.width;
        double newHeight = height + other.height;
        return Shape(newWidth, newHeight);
    }
};

int main() {
    Shape shape1(5, 10); 
    Shape shape2(3, 7);  

    
    Shape sum = shape1 + shape2;

    cout << "Area of shape1: " << shape1.Area() << endl;
    cout << "Area of shape2: " << shape2.Area() << endl;
    cout << "Area of the sum of shape1 and shape2: " << sum.Area() << endl;

    return 0;
}
