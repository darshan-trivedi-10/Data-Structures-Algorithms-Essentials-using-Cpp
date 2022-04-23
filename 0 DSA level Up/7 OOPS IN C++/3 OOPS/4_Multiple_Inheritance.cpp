#include <iostream>
using namespace std;

class Teacher
{
public:
    string name;
    int age;

    void print()
    {
        cout << "Teacher\n";
    };
};

class Student : public Teacher
{
public:
    void print()
    {
        cout << "Student\n";
    };
};

class TA : public Teacher, public Student
{
public:
    TA()
    {
        cout << "TA\n";
    }
};

int main()
{
    TA a;
    a.Student :: print();
    // a.print();
    a.Student :: print();


    return 0;
}