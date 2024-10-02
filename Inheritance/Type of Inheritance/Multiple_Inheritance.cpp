#include <iostream>
#include <string>

using namespace std;

// Base class 1
class Person {
public:
    string name;

    // Constructor for Person
    Person(string n) {
        name = n;
    }
};

// Base class 2
class Academic {
public:
    string researchArea;

    // Constructor for Academic
    Academic(string ra) {
        researchArea = ra;
    }
};

// Derived class that inherits from both Person and Academic (Multiple Inheritance)
class GradStudent : public Person, public Academic {
public:
    int rollNo;

    // Constructor for GradStudent
    GradStudent(string n, int r, string ra) : Person(n), Academic(ra) {
        rollNo = r;
    }

    void getInfo() {
        cout << "Student Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Research Area: " << researchArea << endl;
    }
};

int main() {
    // Creating a GradStudent object using the constructor
    GradStudent p1("Shubham", 59, "Quantum Physics");
    p1.getInfo();

    return 0;
}
