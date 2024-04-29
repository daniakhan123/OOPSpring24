#include <iostream>
using namespace std;

class Employee {
protected:
    string employeeID;
    string employeeName;

public:
    Employee(string id, string name) : employeeID(id), employeeName(name) {}

    virtual double calculatePay() const {
        cout << "\nCalculates the pay for the employee";
        return 0.0;
    }

    virtual void displayDetails() const {
        cout << "\nEmployee ID: " << employeeID;
        cout << "\nEmployee Name: " << employeeName;
    }
};

class FullTimeEmployee : public Employee {
protected:
    double monthlySalary;
    const string employmentType = "Full-time";

public:
    FullTimeEmployee(double salary, string id, string name) : monthlySalary(salary), Employee(id, name) {}

    double calculatePay() const override {
        return monthlySalary;
    }

    void displayDetails() const override {
        Employee::displayDetails();
        cout << "\nType: " << employmentType;
        cout << "\nMonthly Salary: " << monthlySalary;
    }
};

class PartTimeEmployee : public Employee {
protected:
    double hourlyWage;
    int hoursWorked;
    const string employmentType = "Part-time";

public:
    PartTimeEmployee(double wage, int hours, string id, string name) : hourlyWage(wage), hoursWorked(hours), Employee(id, name) {}

    double calculatePay() const override {
        return hourlyWage * hoursWorked;
    }

    void displayDetails() const override {
        Employee::displayDetails();
        cout << "\nType: " << employmentType;
        cout << "\nHourly Wage: " << hourlyWage;
        cout << "\nHours Worked: " << hoursWorked;
    }
};

int main() {
    FullTimeEmployee fullTime(5000.0, "101", "AAA");
    PartTimeEmployee partTime(15.0, 40, "102", "BBB");

    cout << "\nDisplaying Details:";
    fullTime.displayDetails();
    cout << "\n";
    partTime.displayDetails();

    cout << "\n\nCalculating Pay:";
    cout << "\nFull-time Employee Pay: $" << fullTime.calculatePay();
    cout << "\nPart-time Employee Pay: $" << partTime.calculatePay();
    cout << "\nUsing base class pointer to calculate Full-time Employee Pay: ";

    Employee* emp = &fullTime;
    cout << emp->calculatePay();

    return 0;
}
