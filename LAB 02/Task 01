/*
Name:Dania Khan
student ID:23k-0072
description: swapping using recursion
*/

#include<iostream>
using namespace std;

void recursiveSwap(int& x, int& y){// making recusive function
	if(x==y) {
        return;
	}
     else {
        // taking extra temp vaiable for the swapping
		int temp = x;
        x = y;
        y = temp;
	}
}

int main() {
	int a,b;
    // taking input of the value of the two varaiable
	cout<<"Enter the value of a : ";
	cin>>a;
	cout<<"Enter the value of b : ";
    cin>>b;
    
    recursiveSwap(a,b);// calling the recursive function

    cout<<"After Swapping!!!"<<endl;
    // displaying the output of the varables after swapping 
    cout<<"Values of a = "<<a<<endl;
     cout<<"Values of b = "<<b<<endl;
    return 0;
}
