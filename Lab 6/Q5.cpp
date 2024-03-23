#include <iostream>
#include <string>

using namespace std;

class Course {
private:
    string courseCode;
    string courseName;
    int creditHours;

public:
    // Constructor
    Course(const string& code, const string& name, int hours) : courseCode(code), courseName(name), creditHours(hours) {}

    // Getter functions
    string getCourseCode() const { return courseCode; }
    string getCourseName() const { return courseName; }
    int getCreditHours() const { return creditHours; }
};

class Student {
private:
    string studentID;
    string studentName;
    Course* enrolledCourses[10]; // Maximum 10 enrolled courses

public:
    // Constructor
    Student(const string& id, const string& name) : studentID(id), studentName(name) {
        for (int i = 0; i < 10; ++i) {
            enrolledCourses[i] = nullptr; // Initialize all course pointers to nullptr
        }
    }

    // Function to enroll in a course
    void enroll(const Course& course) {
        for (int i = 0; i < 10; ++i) {
            if (enrolledCourses[i] == nullptr) {
                enrolledCourses[i] = new Course(course);
                cout << "Enrolled in " << course.getCourseName() << endl;
                return;
            }
        }
        cout << "Cannot enroll. Maximum course limit reached." << endl;
    }


    void drop(const Course& course) {
        for (int i = 0; i < 10; ++i) {
            if (enrolledCourses[i] != nullptr && enrolledCourses[i]->getCourseCode() == course.getCourseCode()) {
                delete enrolledCourses[i];
                enrolledCourses[i] = nullptr;
                cout << "Dropped " << course.getCourseName() << endl;
                return;
            }
        }
        cout << "Course not found." << endl;
    }

    // Function to get student name
    string getStudentName() const {
        return studentName;
    }


    void printEnrolledCourses() const {
        for (int i = 0; i < 10; ++i) {
            if (enrolledCourses[i] != nullptr) {
                cout << "Course Code: " << enrolledCourses[i]->getCourseCode() << ", Name: " << enrolledCourses[i]->getCourseName() << ", Credit Hours: " << enrolledCourses[i]->getCreditHours() << endl;
            }
        }
    }
};

int main() {

    Course c1("CSCI101", "Computer", 3);
    Course c2("MATH201", "Calculus", 4);
    Course c3("PHYS101", "Physics", 3);


    Student student("S001", "Dania");

   
    student.enroll(c1);
    student.enroll(c2);

   
    cout << "Enrolled courses for " << student.getStudentName() << ":" << endl;
    student.printEnrolledCourses();


    student.drop(c1);

    
    cout << "Enrolled courses for " << student.getStudentName() << " after dropping a course:" << endl;
    student.printEnrolledCourses();

    return 0;
}
