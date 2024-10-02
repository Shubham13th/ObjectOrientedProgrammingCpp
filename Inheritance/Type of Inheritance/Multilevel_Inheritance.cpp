#include <iostream>
#include <string>

using namespace std;

// base class
class Person {
public:
    string name;

    // Constructor for Person
    Person(string n) {
        name = n;
    }
};

// derived class
class Student : public Person {
public:
   int rollNo;

   // Constructor for Student
   Student(string n, int r) : Person(n) {
       rollNo = r;
   }
};

// derived class from Student
class GradStudent : public Student {
public:
    string researchArea;

    // Constructor for GradStudent
    GradStudent(string n, int r, string ra) : Student(n, r) {
        researchArea = ra;
    }

    void getInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Research Area: " << researchArea << endl;
    }
};  // Don't forget the semicolon here!

int main() {
    // Creating a GradStudent object using the constructor
    GradStudent p1("shubham", 59, "quantum physics");
    p1.getInfo();

    return 0;
}
