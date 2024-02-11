/*
name:Dania Khan
id:23K-0072
descp: using recusrion to calculate GCD and LCM.
*/

#include <iostream>
using namespace std;
// Recursive function to find the greatest common divisor (GCD)
int calculateGCD(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return calculateGCD(b, a % b);
    }
}

// Recursive function to find the least common multiple (LCM)
int calculateLCM(int a, int b) {
    return (a * b) / calculateGCD(a, b);
}

int main() {
    int firstNum, secondNum;

   
    cout << "Enter the first number: ";
    cin >> firstNum;
    cout << "Enter the second number: ";
    cin >> secondNum;

    // Calculate and display the GCD
    cout << "The GCD of the two numbers is: " << calculateGCD(firstNum, secondNum) << endl;
    // Calculate and display the LCM
    cout << "The LCM of the two numbers is: " << calculateLCM(firstNum, secondNum) << endl;

    return 0;
}

