#include <iostream>

using namespace std;

class Appointment {
private:
    string customerName;
    float cost;
    static int totalAppointments;
    static float totalEarnings;

public:
    Appointment(string name, float appointmentCost) {
        customerName = name;
        cost = appointmentCost;
        totalAppointments++;
        totalEarnings += appointmentCost;
    }

    string getCustomerName() const {
        return customerName;
    }

    float getCost() const {
        return cost;
    }

    static float getAverageCost() {
        if (totalAppointments == 0) {
            return 0;
        }
        return totalEarnings / totalAppointments;
    }
};

int Appointment::totalAppointments = 0;
float Appointment::totalEarnings = 0.0f;

int main() {
    // Creating appointment instances
    Appointment appointment1("Alice", 50.0);
    Appointment appointment2("Bob", 40.0);
    Appointment appointment3("Charlie", 60.0);

    // Calculating average cost
    float averageCost = Appointment::getAverageCost();

    // Displaying average cost
    cout << "Average cost per appointment: $" << averageCost << endl;

    return 0;
}
