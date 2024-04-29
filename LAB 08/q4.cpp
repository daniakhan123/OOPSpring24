#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(const string& n, int a) : name(n), age(a) {}
};

class Student : public Person {
private:
    string student_id;
    int grade_level;

public:
    Student(const string& n, int a, const string& id, int grade) : Person(n, a), student_id(id), grade_level(grade) {}

    void display() {
        cout << "Student: " << name << ", Age: " << age << ", ID: " << student_id << ", Grade Level: " << grade_level << endl;
    }
};

class Teacher : public Person {
private:
    string subject;
    string room_number;

public:
    Teacher(const string& n, int a, const string& subj, const string& room) : Person(n, a), subject(subj), room_number(room) {}

    void display() {
        cout << "Teacher: " << name << ", Age: " << age << ", Subject: " << subject << ", Room Number: " << room_number << endl;
    }
};

int main() {
    Student student1("Dania", 15, "S12345", 10);
    Teacher teacher1("Sir Talha", 35, "OOP", "Room C05");

    student1.display();
    teacher1.display();

    return 0;
}
