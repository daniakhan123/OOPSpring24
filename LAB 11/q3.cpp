#include<iostream>
using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int speed;

public:
    Vehicle(string make, string mod, int s) : make(make), model(mod), speed(s) {}

    virtual void accelerate() = 0;
    virtual void brake() = 0;
    virtual double calculateFuelEfficiency(int distance) = 0;

    string getMake() {
        return make;
    }

    string getModel() {
        return model;
    }

    int getSpeed() {
        return speed;
    }
}; 

class Car : public Vehicle {
    double fuelCapacity;

public:
    Car(string make, string mod, int s, double fuel) : Vehicle(make, mod, s), fuelCapacity(fuel) {}

    void accelerate() override {
        speed += 10;
    }

    void brake() override {
        speed -= 10;
    }

    double calculateFuelEfficiency(int distance) override {
         return fuelCapacity = distance * 11; 
    }
};

class Truck : public Vehicle {
    int cargoCapacity;

public:
    Truck(string make, string mod, int s, int cargo) : Vehicle(make, mod, s), cargoCapacity(cargo) {}

    void accelerate() override {
        speed += 5;
    }

    void brake() override {
        speed -= 5;
    }

    double calculateFuelEfficiency(int distance) override {
        return cargoCapacity / (distance * 2); 
    }
};

int main() {
    Car myCar("Civic", "Turbo", 70, 120.3);
    Truck myTruck("Ford", "F1092", 40, 1000);

    cout << "-----------Car Information-------------" << endl;
    myCar.accelerate();
    cout << "Car Make: " << myCar.getMake() << endl;
    cout << "Car Model: " << myCar.getModel() << endl;
    cout << "Car Speed: " << myCar.getSpeed() << endl;

    cout << "-----------Truck Information-------------" << endl;
    myTruck.accelerate();
    myTruck.brake();
    cout << "Truck Make: " << myTruck.getMake() << endl;
    cout << "Truck Model: " << myTruck.getModel() << endl;
    cout << "Truck Speed: " << myTruck.getSpeed() << endl;

    return 0;
}

