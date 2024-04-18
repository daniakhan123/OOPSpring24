#include<iostream>
using namespace std;

class perimeter; 
class printClass {
public:
    void displayPerimeter(perimeter& p);
};

class perimeter {
    int length;
    int breadth;
public:
    perimeter(int l, int b) : length(l), breadth(b) {}

    friend class printClass;

    int calculatePerimeter() {
        return 2 * (length + breadth);
    }
};

void printClass::displayPerimeter(perimeter& p) {
    cout << "Perimeter: " << p.calculatePerimeter() << endl;
}

int main() {
    perimeter obj(5, 3);
    printClass printer;
    printer.displayPerimeter(obj);

    return 0;
}
