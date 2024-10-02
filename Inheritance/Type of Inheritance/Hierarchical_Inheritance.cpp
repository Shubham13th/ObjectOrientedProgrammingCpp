#include <iostream>
#include <string>

using namespace std;

// Base class
class Person {
public:
    string name;

    // Constructor for Person
    Person(string n) {
        name = n;
    }

    void getName() {
        cout << "Name: " << name << endl;
    }
};

// Derived class 1
class Student : public Person {
public:
    int rollNo;

    // Constructor for Student
    Student(string n, int r) : Person(n) {
        rollNo = r;
    }

    void getInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

// Derived class 2
class Teacher : public Person {
public:
    string subject;

    // Constructor for Teacher
    Teacher(string n, string s) : Person(n) {
        subject = s;
    }

    void getInfo() {
        cout << "Teacher Name: " << name << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Creating a Student object
    Student student1("Shubham", 59);
    student1.getInfo();

    // Creating a Teacher object
    Teacher teacher1("Mr. Kumar", "Physics");
    teacher1.getInfo();

    return 0;
}
