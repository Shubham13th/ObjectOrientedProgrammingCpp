#include <iostream>
#include <string>

using namespace std;

// base class
class Person {
public:
    string name;
    int rollNo;

    // parameterized constructor
    Person(string n, int r) {
        this->name = n;
        this->rollNo = r;
    }

    // default constructor
    Person() {
        cout << "This is the default constructor from Person\n";
    }

    ~Person() {
        cout << "This is the destructor from Person\n";
    }
};

// derived class
class Student : public Person {
public:
    double cgpa;

    // default constructor
    Student() : Person() {  // explicitly call the default constructor of Person
        cout << "This is the default constructor from Student\n";
    }

    // parameterized constructor
    Student(string name, int rollNo, double cgpa) : Person(name, rollNo) {
        this->cgpa = cgpa;
    }

    ~Student() {
        cout << "This is the destructor from Student\n";
    }

    void getInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student p1("shubham", 59, 9);  // Calls the parameterized constructor of Student
    p1.getInfo();

    Student p2;

    return 0;
}
