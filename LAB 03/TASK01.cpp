// name Dania Khan
// ID 23k-0072

#include<iostream>
#include<string>
using namespace std;

class BoardMarker {
private:
    string Brand;
    string Shade;
    bool Refillable;
    bool InkStatus;

public:
    // defining setter methid within the class
    void setBrand(const string &brand) {
        Brand = brand;
    }

    void setShade(const string &shade) {
        Shade = shade;
    }

    void setRefillable(bool refillable) {
        Refillable = refillable;
    }

    void setInkStatus(bool inkStatus) {
        InkStatus = inkStatus;
    }

    //define the getter method
    string getBrand() const {
        return Brand;
    }

    string getShade() const {
        return Shade;
    }

    bool isRefillable() const {
        return Refillable;
    }

    bool getInkStatus() const {
        return InkStatus;
    }

    // Writing method
    void write() {
        if (InkStatus) {
            cout<<"Writing with"<<Brand<<"board marker"<<endl;
        } else {
            cout<<"Ink is depleted. Cannot write"<<endl;
        }
    }

    // Refill method
    void refill() {
        if (Refillable) {
            cout<<Brand<<" board marker can be refilled"<<endl;
        } else {
            cout<<Brand<<" board marker cannot be refilled"<<endl;
        }
    }
};

int main() {
    BoardMarker board;
    string brand, shade;
    bool refillable, inkStatus;

    cout<<"Enter the Name of the Brand: ";
    getline(cin, brand);
    board.setBrand(brand);

    cout<<"Enter the Name of the Shade: ";
    getline(cin, shade);
    board.setShade(shade);

    cout<<"Is the Marker Refillable? (1 for Yes, 0 for No): ";
    cin >> refillable;
    board.setRefillable(refillable);

    cout<<"Is the Ink Depleted? (1 for Yes, 0 for No): ";
    cin>>inkStatus;
    board.setInkStatus(inkStatus);

    // Displaying marker information
    cout<<"\nMarker Information:"<<endl;
    cout<<"Brand: " << board.getBrand()<<endl;
    cout<<"Shade: " << board.getShade()<<endl;

    cout<<"Refillable: ";
    if (board.isRefillable()) {
            cout<<"Yes"<< endl;
        } 
    else {
        cout<<"No"<<endl;
    }
    cout<<"Ink Status: ";
        if  (board.getInkStatus()) {
     cout<<"Depleted"<<endl;
         } else {
       cout<<"Not Depleted"<<endl;
    }

    // Performing writing and refill operations
    cout<<"\nPerforming Writing Operation:"<<endl;
    board.write();

    cout<<"\nPerforming Refill Operation:"<<endl;
    board.refill();

    return 0;
}

