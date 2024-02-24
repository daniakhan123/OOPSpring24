#include<iostream>
using namespace std;

class Square {
    float sideLength;
    float area;
    static float allareas_static;

public:
    Square() {
        sideLength = 0.0;
        area = 0.0;
    }

    Square(float length) {
        sideLength = length;
        area = sideLength * sideLength;
        allareas_static += area;
    }

    void setsideLength(float length) {
        sideLength = length;
        area = sideLength * sideLength;
        allareas_static += area;
    }

    float getsideLength() {
        return sideLength;
    }

    float getarea() {
        return area;
    }

    static float getallareas_static() {
        return allareas_static;
    }
};

float Square::allareas_static = 0.0;

int main() {
    Square sq[3];
    float sideLength;

    for (int i = 0; i < 3; i++) {
        cout << "ENTER SIDE LENGTH OF SQUARE " << i+1 << ": ";
        cin >> sideLength;
        sq[i].setsideLength(sideLength);
    }

    cout << "AREA OF SQUARES:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "SQUARE " << i+1 << " AREA: " << sq[i].getarea() << endl;
    }

    cout << "SUM OF ALL SQUARES: " << Square::getallareas_static() << endl;

    return 0;
}
