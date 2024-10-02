// constructor:

// it is a special method invoked automatically at time of object creation used for initialisation

// 1.Same name as class .
// 2.Constructor does not have a return type.
// 3.Only called once (automatically) at object creation.
// 4.Memory allocation happens when constructor is called.

#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    string name;    // Name of the teacher
    string subject; // Subject taught by the teacher
    string dept;    // Department the teacher belongs to
    double salary;  // Teacher's salary

    // 1. Default Constructor
    Teacher()
    {
        cout << "Default constructor called (No parameters)" << endl;
    }

    // 2. Parameterized Constructor
    Teacher(string n, string s, string d, double b)
    {
        name = n;    // Initializing name
        subject = s; // Initializing subject
        dept = d;    // Initializing department
        salary = b;  // Initializing salary
        cout << "Parameterized constructor called" << endl;
    }

    // 3. Copy Constructor (Best practice: use const reference for the source object)
    Teacher(const Teacher &other)
    {
        name = other.name;       // Copying name
        subject = other.subject; // Copying subject
        dept = other.dept;       // Copying department
        salary = other.salary;   // Copying salary
        cout << "Copy constructor called" << endl;
    }

    // Method to display the details of the teacher
    void displayTeacherDetails()
    {
        cout << "Name : " << name << endl;       // Displaying name
        cout << "Subject : " << subject << endl; // Displaying subject
        cout << "Department : " << dept << endl; // Displaying department
        cout << "Salary : " << salary << endl;   // Displaying salary
    }
};

int main()
{
    // Using the parameterized constructor to create a Teacher object
    Teacher t1("Shubham", "OOP", "Computer Science", 25000);

    // Using the copy constructor to create a new Teacher object by copying t1
    Teacher t2(t1);

    // Display the details of t1
    cout << "Details of t1 (Original):" << endl;
    t1.displayTeacherDetails();
    cout << endl;

    // Display the details of t2 (Copied from t1)
    cout << "Details of t2 (Copied):" << endl;
    t2.displayTeacherDetails();

    return 0;
}
