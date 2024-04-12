// Name : Dania Khan
// ID : 23k-0072

#include<iostream>
using namespace std;

class Employee {
protected:
    int Empid;
    string Empname;

public:
    Employee(int id, const string& name) : Empid(id), Empname(name) {}

    virtual double calculatePay() const {
        cout << "Calculates the pay for the respective employee";
        return 0.0;
    }

    virtual void displayDetails() const {
        cout << "Employee Id: " << Empid << endl;
        cout << "Employee Name: " << Empname << endl;
    }
};

class FullTimeEmployee : public Employee {
protected:
    float monthlySal;

public:
    FullTimeEmployee(int id, const string& name, float salary) : Employee(id, name), monthlySal(salary) {}

    double calculatePay() const override {
        return monthlySal;
    }

    void displayDetails() const override {
        Employee::displayDetails();
        cout << "Monthly Salary: " << monthlySal << endl;
    }
};

class PartTimeEmployee : public Employee {
protected:
    float hourlyWage;
    int numOfHours;

public:
    PartTimeEmployee(int id, const string& name, float wage, int hours) : Employee(id, name), hourlyWage(wage), numOfHours(hours) {}

    double calculatePay() const override {
        return hourlyWage * numOfHours;
    }

    void displayDetails() const override {
        Employee::displayDetails();
        cout << "Hourly Wage: " << hourlyWage << endl;
        cout << "Number of Hours: " << numOfHours << endl;
    }
};

int main() {
    FullTimeEmployee f1(101, "Dania Khan", 5000.0);
    PartTimeEmployee p1(102, "Emaan Arshad", 15.0, 40);

    // Display details
    cout << "Displaying Details:" << endl;
    cout << "Full-time Employee Details:" << endl;
    f1.displayDetails();
    cout << "\nPart-time Employee Details:" << endl;
    p1.displayDetails();

    // Calculating Pay
    cout << "\nCalculating Pay:" << endl;
    cout << "Full-time Employee Pay: $" << f1.calculatePay() << endl;
    cout << "Part-time Employee Pay: $" << p1.calculatePay() << endl;

    // Using base class pointer to calculate Full-time Employee Pay
    Employee* empPtr = &f1;
    
    return 0;
}

