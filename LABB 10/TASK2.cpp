#include<iostream>
using namespace std;

class base{
public:
    int a;
    base(int x) : a(x) {}

   
    base operator--() {
        a *= 4;
        return *this;
    }

   
    base operator--(int) {
        base temp(a);
        a /= 4;
        return temp;
    }

    void display() {
        cout << "The value is: " << a << endl;
    }
};

int main() {
    base b2(9), b3(0);
    b3.display();
    cout << "prefix" << endl;
    b3 = --b2;
    b2.display();
    b3.display();
    cout << "postfix" << endl;
    b3 = b2--;
    b3.display();

    return 0;
}
