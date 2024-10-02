#include <iostream>
#include <string>

using namespace std;
class Student
{
public:
    string name;
    int rollNo;
    double stipend;
    double *cgpaptr;

    // paramaterized constructor 

    Student(string n,int r,double s,double cgpa){
        this->name = n;
        this->rollNo = r;
        this->stipend = s;
        *cgpaptr = cgpa;
    }

    // destructor
    // it started with ~ sign

    ~Student(){
        cout<<"this is destructor"<<endl;
        delete cgpaptr;
    }

    void getInfo()
    {
        cout << "Student Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Stipend: " << stipend << endl;
        cout<< "cgpa: "<< cgpaptr <<endl;
    }
};
int main()
{

    Student s1("shubh",59,45000,8);
    s1.getInfo();

    return 0;
}