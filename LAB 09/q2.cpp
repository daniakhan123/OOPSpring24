#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

class Shape {
public:
    virtual double computeArea() const {
        cout << "\nCalculates the area of the shape";
        return 0.0;
    }

    virtual double computePerimeter() const {
        cout << "\nCalculates the perimeter of the shape";
        return 0.0;
    }

    virtual void displayProperties() const {
        cout << "\nDisplays the properties of the shape";
    }
};

class Circle : public Shape {
    double const pi = 3.14;
    int radius;

public:
    Circle(int radius) {
        this->radius = radius;
    }

    double computeArea() const override {
        return (double(radius * radius) * pi);
    }

    double computePerimeter() const override {
        return ((double(radius) * pi) * 2);
    }

    void displayProperties() const override {
        cout << fixed << setprecision(4);
        cout << "\n- Area: " << computeArea();
        cout << "\n- Perimeter: " << computePerimeter();
        cout << "\n- Diameter: " << 2 * radius;
    }
};

class Square : public Shape {
    int side;

public:
    Square(int side) {
        this->side = side;
    }

    double computeArea() const override {
        return double(side * side);
    }

    double computePerimeter() const override {
        return (4 * double(side));
    }

    void displayProperties() const override {
        cout << fixed << setprecision(4);
        cout << "\n- Area: " << computeArea();
        cout << "\n- Perimeter: " << computePerimeter();
        cout << "\n- Diagonal: " << sqrt(double((side * side) + (side * side)));
    }
};

class Rectangle : public Shape {
    int length;
    int width;

public:
    Rectangle(int length, int width) {
        this->length = length;
        this->width = width;
    }

    double computeArea() const override {
        return double(length * width);
    }

    double computePerimeter() const override {
        return ((2 * double(length)) + (2 * double(width)));
    }

    void displayProperties() const override {
        cout << fixed << setprecision(4);
        cout << "\n- Area: " << computeArea();
        cout << "\n- Perimeter: " << computePerimeter();
        cout << "\n- Diagonal: " << sqrt(double((length * length) + (width * width)));
    }
};

class Triangle : public Shape {
    int* sides;

public:
    Triangle(int sides[]) {
        this->sides = new int[3];
        for (int i = 0; i < 3; i++) {
            this->sides[i] = sides[i];
        }
    }

    double computeArea() const override {
        double semi = computePerimeter() / 2.0;
        return sqrt(semi * (semi - sides[0]) * (semi - sides[1]) * (semi - sides[2]));
    }

    double computePerimeter() const override {
        return sides[0] + sides[1] + sides[2];
    }

    void displayProperties() const override {
        cout << fixed << setprecision(4);
        cout << "\n- Area: " << computeArea();
        cout << "\n- Perimeter: " << computePerimeter();
    }

    ~Triangle() {
        delete[] sides;
    }
};

class EquilateralTriangle : public Triangle {
    int side;

public:
    EquilateralTriangle(int side[]) : Triangle(side) {
        if ((side[0] == side[1]) && (side[0] == side[2]) && (side[1] == side[2])) {
            this->side = side[0];
        }
    }

    double computeArea() const override {
        return (0.43301270189) * double(side * side);
    }

    double computePerimeter() const override {
        return 3 * double(side);
    }

    void displayProperties() const override {
        cout << fixed << setprecision(4);
        cout << "\n- Area: " << computeArea();
        cout << "\n- Perimeter: " << computePerimeter();
    }
};

int main() {
    cout << "\nWelcome to the Geometry Competition Calculator!\n";
    bool continueCalculation = true;
    while (continueCalculation) {
        cout << "\nPlease select a shape:\n1. Circle\n2. Rectangle\n3. Square\n4. Triangle\n";
        int choice;
        cout << "\nEnter your choice: ";
        cin >> choice;
        Shape* shape;
        if (choice == 1) {
            int radius;
            cout << "\nEnter the radius of the circle: ";
            cin >> radius;
            Circle c(radius);
            shape = &c;
            cout << "\nProperties of the circle:";
            shape->displayProperties();
        }
        else if (choice == 2) {
            int length, width;
            cout << "\nEnter the length of the rectangle: ";
            cin >> length;
            cout << "\nEnter the width of the rectangle: ";
            cin >> width;
            Rectangle r(length, width);
            shape = &r;
            cout << "\nProperties of the rectangle:";
            shape->displayProperties();
        }
        else if (choice == 3) {
            int side;
            cout << "\nEnter the side length of the square: ";
            cin >> side;
            Square sq(side);
            shape = &sq;
            cout << "\nProperties of the square:";
            shape->displayProperties();
        }
        else if (choice == 4) {
            int option;
            cout << "\nPress:\n1. Properties of a triangle\n2. Properties of an equilateral triangle\n";
            cin >> option;
            if (option == 1) {
                int sides[3];
                cout << "\nEnter the lengths of the three sides of the triangle: ";
                for (int i = 0; i < 3; i++) {
                    cout << "\nSide " << i + 1 << ": ";
                    cin >> sides[i];
                }
                Triangle t(sides);
                shape = &t;
                cout << "\nProperties of the triangle:";
                shape->displayProperties();
            }
            else if (option == 2) {
                int side[3];
                cout << "\nEnter the lengths of the three sides of the equilateral triangle: ";
                for (int i = 0; i < 3; i++) {
                    cout << "\nSide " << i + 1 << ": ";
                    cin >> side[i];
                }
                EquilateralTriangle et(side);
                shape = &et;
                cout << "\nProperties of the equilateral triangle:";
                shape->displayProperties();
            }
        }
        string decision;
        cout << "\nDo you want to calculate properties for another shape? (yes/no): ";
        cin >> decision;
        if (decision == "no") {
            continueCalculation = false;
            cout << "\nThank you for using the Geometry Competition Calculator!";
        }
    }
    return 0;
}
