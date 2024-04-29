#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int year;

public:
    Vehicle(const string& _make, const string& _model, int _year) : make(_make), model(_model), year(_year) {}

    void displayInfo() {
        cout << "Make: " << make << ", Model: " << model << ", Year: " << year << endl;
    }
};

class Car : public Vehicle {
protected:
    int num_doors;
    float fuel_efficiency;

public:
    Car(const string& _make, const string& _model, int _year, int _num_doors, float _fuel_efficiency)
        : Vehicle(_make, _model, _year), num_doors(_num_doors), fuel_efficiency(_fuel_efficiency) {}

    void displayInfo() {
        Vehicle::displayInfo();
        cout << "Number of Doors: " << num_doors << ", Fuel Efficiency: " << fuel_efficiency << " mpg" << endl;
    }
};

class ElectricCar : public Car {
private:
    float battery_life;

public:
    ElectricCar(const string& _make, const string& _model, int _year, int _num_doors, float _fuel_efficiency, float _battery_life)
        : Car(_make, _model, _year, _num_doors, _fuel_efficiency), battery_life(_battery_life) {}

    void displayInfo() {
        Car::displayInfo();
        cout << "Battery Life: " << battery_life << " kWh" << endl;
    }
};

int main() {
    ElectricCar electricCar("Tesla", "Model S", 2022, 4, 120.5, 75.0);
    electricCar.displayInfo();
    return 0;
}
