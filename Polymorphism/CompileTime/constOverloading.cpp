#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;

    // compile time polymorphism

    Student()
    {
        cout << "this is non parametrized constructor\n";
    }

    Student(string name)
    {
        this->name = name;
        cout << "this is parameterized constructor\n";
    }
};

int main()
{

    // Student s1;
    Student s1("Unknown");

    return 0;
}