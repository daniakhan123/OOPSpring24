//deania khan 
// 23k0072


#include <iostream>
#include <string>
using namespace std;

class Calendar {
public:
    string months[12] = {"jan", "feb", "mar", "apr", "may", "june", "july", "aug", "sept", "oct", "nov", "dec"};
    string tasks[12][31]; // Assuming each month has 31 days
    int currentYear;

    void addTask(int day, string month, string taskDetail) {
        int monthIndex = getMonthIndex(month);
        if (monthIndex != -1 && day >= 1 && day <= 31) {
            tasks[monthIndex][day - 1] = taskDetail;
            cout << "Task added successfully.\n";
        } else {
            cout << "Invalid month or day.\n";
        }
    }

    void removeTask(int day, string month) {
        int monthIndex = getMonthIndex(month);
        if (monthIndex != -1 && day >= 1 && day <= 31) {
            tasks[monthIndex][day - 1] = "";
            cout << "Task removed successfully.\n";
        } else {
            cout << "Invalid month or day.\n";
        }
    }

    void displayTasks() {
        for (int i = 0; i < 12; ++i) {
            cout << months[i] << ":\n";
            for (int j = 0; j < 31; ++j) {
                if (!tasks[i][j].empty()) {
                    cout << "Day " << j + 1 << ": " << tasks[i][j] << endl;
                }
            }
        }
    }

private:
    int getMonthIndex(string month) {
        for (int i = 0; i < 12; ++i) {
            if (months[i] == month) {
                return i;
            }
        }
        return -1; // Month not found
    }
};

int main() {
    int year;
    cout << "Enter the current year: ";
    cin >> year;

    Calendar myCalendar;

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Add task\n";
        cout << "2. Remove task\n";
        cout << "3. Display tasks\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int day;
                string month, task;
                cout << "Enter month (e.g., January): ";
                cin >> month;
                cout << "Enter day: ";
                cin >> day;
                cout << "Enter task details: ";
                cin.ignore();
                getline(cin, task);
                myCalendar.addTask(day, month, task);
                break;
            }
            case 2: {
                int day;
                string month;
                cout << "Enter month (e.g., January): ";
                cin >> month;
                cout << "Enter day: ";
                cin >> day;
                myCalendar.removeTask(day, month);
                break;
            }
            case 3:
                myCalendar.displayTasks();
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

