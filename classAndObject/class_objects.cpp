#include <iostream>
#include <string>

using namespace std;

class Teacher
{
private:  // access modifier
    string gender;

public:
    // properties / attributes
    string name;
    string dept;
    string subject;
    double salary;

    // methods / member function
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // setter function
    void setGender(string s){
        gender = s;
    }

    // getter function
    string getGender(){
        return gender;
    }
};

int main()
{
    // creating object : class_name object
    Teacher t1;

    t1.name = "shubham";
    t1.dept = "computer science Engineering";
    t1.subject = "Oops";
    t1.salary = 50000;
    string gender = "Male";
    t1.setGender(gender);

    cout << t1.name << "\n"
         << t1.dept << "\n"
         << t1.subject << "\n"
         << t1.salary << endl
         << endl;

    string newDept = "Mechanical Engineering";

    t1.changeDept(newDept);
    cout << t1.name << "\n"
         << t1.dept << "\n"
         << t1.subject << "\n"
         << t1.salary << endl
         << endl;

    return 0;
}