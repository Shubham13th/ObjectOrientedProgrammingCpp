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

// Another Base class
class Academic {
public:
    string researchArea;

    // Constructor for Academic
    Academic(string ra) {
        researchArea = ra;
    }

    void getResearchArea() {
        cout << "Research Area: " << researchArea << endl;
    }
};

// Derived class 1 (Single Inheritance from Person)
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

// Derived class 2 (Multiple Inheritance from Person and Academic)
class GradStudent : public Student, public Academic {
public:
    // Constructor for GradStudent
    GradStudent(string n, int r, string ra) : Student(n, r), Academic(ra) {}

    void getGradInfo() {
        cout << "Graduate Student Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Research Area: " << researchArea << endl;
    }
};

int main() {
    // Creating a GradStudent object using hybrid inheritance
    GradStudent gradStudent1("Shubham", 59, "Quantum Physics");

    gradStudent1.getGradInfo(); // Displays all details

    return 0;
}
