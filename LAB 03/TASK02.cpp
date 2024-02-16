//name Dania Khan
// roll num 23k-0072

#include <iostream>
#include <string>
using namespace std;

class WaterBottle {
private:
    string company;
    string color;
    string manufacturer;
    float waterCapacity_ML;
    float waterCapacity_L;

public:
    // Setter methods
    void setCompany(const string& comp) {
        company = comp;
    }

    void setColor(const string& col) {
        color = col;
    }

    void setManufacturer(const string& manu) {
        manufacturer = manu;
    }

    void setWaterCapacity(float capacityML, float capacityL) {
        waterCapacity_ML = capacityML;
        waterCapacity_L = capacityL;
    }

    // Getter methods
    string getCompany() const {
        return company;
    }

    string getColor() const {
        return color;
    }

    string getManufacturer() const {
        return manufacturer;
    }

    float getWaterCapacityML() const {
        return waterCapacity_ML;
    }

    float getWaterCapacityL() const {
        return waterCapacity_L;
    }

    // Method to update water capacity after consumption
    void updateWaterCapacity(float consumedML) {
        if (consumedML <= waterCapacity_ML) {
            waterCapacity_ML -= consumedML;
            if (waterCapacity_ML < 0) {
                waterCapacity_L += waterCapacity_ML / 1000; // Convert excess consumed ML to L
                waterCapacity_ML = 0;
            }
            cout << consumedML << "ml of water is consumed!" << endl;
        } else {
            cout << "Not enough water in the bottle!" << endl;
        }
    }
};

int main() {
    WaterBottle wb;

    string company, color, manufacturer;
    float capacityML, capacityL, consumedML;

    cout << "Enter the company: ";
    getline(cin, company);
    wb.setCompany(company);

    cout << "Enter the color: ";
    getline(cin, color);
    wb.setColor(color);

    cout << "Enter the manufacturer: ";
    getline(cin, manufacturer);
    wb.setManufacturer(manufacturer);

    cout << "Enter the water capacity in milliliters: ";
    cin >> capacityML;

    cout << "Enter the water capacity in liters: ";
    cin >> capacityL;

    wb.setWaterCapacity(capacityML, capacityL);

    cout << "Enter the amount of water consumed: ";
    cin >> consumedML;

    wb.updateWaterCapacity(consumedML);

    // Displaying initial attributes
    cout << "Company: " << wb.getCompany() << endl;
    cout << "Color: " << wb.getColor() << endl;
    cout << "Manufacturer: " << wb.getManufacturer() << endl;
    cout << "Water Capacity: " << wb.getWaterCapacityL() << " liters and " << wb.getWaterCapacityML() << " milliliters" << endl;

    return 0;
}

