//student name dania khan
//Id 23k-0072

#include <iostream>
#include <string>
using namespace std;

class WeekDays {
    string days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int CurrentDay;

public:
    // Default constructor
    WeekDays() {
        CurrentDay = 0; 
    }

    // Parameterized constructor
    WeekDays(int day) {
        CurrentDay = (day % 7 + 7) % 7; 
    }


    string getCurrentDay() {
        return days[CurrentDay];
    }

    string getNextDay() {
        return days[(CurrentDay + 1) % 7];
    }

    string getPreviousDay() {
        return days[(CurrentDay - 1 + 7) % 7];
    }

    string getNthDayFromToday(int N) {
        return days[(CurrentDay + N) % 7];
    }
};

int main() {
     
    int input;
    cout<<"enter the current Day eg: (1 for sunday ,2 for monday, 3 for tuesday .... 7 for saturday)"<<endl;
    cin>>input;

    WeekDays obj1(input);
    cout << "Current Day: " << obj1.getCurrentDay() << endl;
    cout << "Next Day: " << obj1.getNextDay() << endl;
    cout << "Previous Day: " << obj1.getPreviousDay() << endl;
    cout << "3rd day from Today: " << obj1.getNthDayFromToday(3) << endl;

    cout<<"\n--------------By using parameterized constructor--------------\n"<<endl;

    WeekDays obj2(input); 
    cout << "\nCurrent Day: " << obj2.getCurrentDay() << endl;
    cout << "Next Day: " << obj2.getNextDay() << endl;
    cout << "Previous Day: " << obj2.getPreviousDay() << endl;
    cout << "3rd day from Today: " << obj2.getNthDayFromToday(3) << endl;

    return 0;
}
