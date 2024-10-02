#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    int rollNo;
    // compile time polymorphism
    // Function Overloading

    void show(string name)
    {
        cout << "name :" << name << endl;
    }

    void show(int rollNo)
    {
        cout << "Roll no :" << rollNo << endl;
    }
};

int main()
{

    Student s1;
    // s1.show("Unknown");
    s1.show(01);

    return 0;
}