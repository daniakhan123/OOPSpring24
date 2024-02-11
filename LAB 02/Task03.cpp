
// Name Dania Khan
// student Id : 23k-0072
// decp : recursive function for subset sum

#include <iostream>
using namespace std;

// Function to check if there exists a subset with the given target sum
bool hasSubsetSum(int arr[], int size, int targetSum) {
   
    if (targetSum == 0) {
        return true;
    }
    if (size == 0) {
        return false;
    }
    // including and excluding the current element of the susbset
    return hasSubsetSum(arr+1 ,size-1 , targetSum -arr[0]) || hasSubsetSum(arr+1 , size-1 ,targetSum);
}

int main() {
    // Input the number of elements in the array
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    // Input the elements of the array
    int a[n];
    cout<<"Enter the elements of the array: ";
    for (int i=0; i<n ; i++) {
        cin>>a[i];
    }

    // Input the target sum
    int target;
    cout<< "Enter the target sum: ";
    cin>>target;

    // Check if there exists a subset with the target sum
    if (hasSubsetSum(a ,  n , target)) {
        cout<<"subset exist with the target sum "<<target<<endl;
    } else {
        cout<<"No subset exists with the target sum "<<target <<endl;
    }

    return 0;
}
