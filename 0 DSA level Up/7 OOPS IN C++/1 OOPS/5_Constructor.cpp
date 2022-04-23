//Read Comment Below
#include <iostream>
using namespace std;

class student
{
public:
    int rollnumber;

private:
    int age;

public:
    //Default Constructor
    student()
    {
        cout << "Defult Constructor called" << endl;
    }

    // Constructor with one argument called.
    student(int r)
    {
        cout << "One Parameterized Constructor called\n"
             << endl;
        rollnumber = r;
        display();
    }
    // Constructor with two argument called.
    student(int rollnumber, int age)
    {
        cout << "Two Parameterized Constructor called \n"
             << endl;

        // cout << this << endl;
        this->rollnumber = rollnumber;
        this->age = age;
        display();
    }
    void display()
    {
        cout << "age --> " << age << " rollnumber -->" << rollnumber << endl
             << endl;
    }

    //Default Desteuctor.
    ~student()
    {
        // cout << "Desteuctor Called!\n";
    }

    int getage()
    {
        return age;
    }

    void setage(int a)
    {
        if (a < 0)
        {
            return;
        }

        // this->age = age;
        age = a;
    }
};

int main()
{
    student s1;         // Default Constructor Called.
    student s2(10);     //One Parameterized Constructor called
    student s3(11, 12); //Two Parameterized Constructor called
    student s4(s3);     //Copy Constructor Called.
    s1 = s2;            //No Constructor Called We are using Copy assigment operator

    student s5 = s4;  // Copy Constructor

    return 0;
}

/*
1) why No Constructor called in line 74 s1 = s2??

    ans . ---> Bcz Constructor Called only one time When we creat object. now s1 and s2 are avelible in memory so they only change their value.

2) what happend in line 76 student s6 = s4; ??

    ans. ---> Copy Constructor called.rather than first creat their first called default constructor and after copy value.
*/