#include &lt;iostream&gt;
#include &lt;string&gt;
using namespace std;
class Person {
protected:
    string name;
    int age;
public:

    Person(const string&amp; n, int a) : name(n), age(a) {}
};
class Student : public Person {
private:
    string student_id;
    int grade_level;
public:
    Student(const string&amp; n, int a, const string&amp; id, int grade) : Person(n, a),
student_id(id), grade_level(grade) {}
    void display() {
        cout &lt;&lt; &quot;Student: &quot; &lt;&lt; name &lt;&lt; &quot;, Age: &quot; &lt;&lt; age &lt;&lt; &quot;, ID: &quot; &lt;&lt; student_id
&lt;&lt; &quot;, Grade Level: &quot; &lt;&lt; grade_level &lt;&lt; endl;
    }
};
class Teacher : public Person {
private:
    string subject;
    string room_number;
public:
    Teacher(const string&amp; n, int a, const string&amp; subj, const string&amp; room) :
Person(n, a), subject(subj), room_number(room) {}
    void display() {
        cout &lt;&lt; &quot;Teacher: &quot; &lt;&lt; name &lt;&lt; &quot;, Age: &quot; &lt;&lt; age &lt;&lt; &quot;, Subject: &quot; &lt;&lt;
subject &lt;&lt; &quot;, Room Number: &quot; &lt;&lt; room_number &lt;&lt; endl;
    }
};
int main() {
    Student student1(&quot;Dania&quot;, 15, &quot;S12345&quot;, 10);
    Teacher teacher1(&quot;Sir Talha&quot;, 35, &quot;OOP&quot;, &quot;Room C05&quot;);
    student1.display();
    teacher1.display();
    return 0;
}
