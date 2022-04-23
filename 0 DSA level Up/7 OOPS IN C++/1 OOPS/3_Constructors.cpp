#include <iostream>
using namespace std;

class student
{
private:
    int age;

public:
    int rollNumber;
    string name;

    // Default Constructor
    student()
    {
        cout << "Constructor called\n";
    }

    // Constructor with one argument called.
    student(int rollNumber)
    {
        cout << "One Parameterized Constructor called\n";
        this->rollNumber = rollNumber;
    }

    // Constructor with two argument called.
    student(int rollNumber, int age, string name)
    {
        cout << "Three Parameterized Constructor called\n";
        // cout << this << endl;
        this->rollNumber = rollNumber;
        this->age = age;
        this->name = name;
    }

    void display()
    {
        cout << "Name : " << name << ",\n";
        cout << "Roll - Number : " << rollNumber << ",\n";
        cout << "Age : " << age << "\n\n";
    }

    //  Setter
    void setAge(int age)
    {
        if (age < 0)
        {
            cout << "Enter Correct Age:)\n";
            return;
        }

        this->age = age;
    }

    // Getter
    int getAge()
    {
        return age;
    }
};

int main()
{

    //Playing with default Constructor ==> :)
    student s1, s2;
    student *s3 = new student;
    cout << endl;
    s3->name = "Darshan";
    s3->setAge(18);
    s3->rollNumber = 9;
    s3->display();

    //Playing with Parameterized Constructor ==> :)
    student s4(5);
    cout << endl;
    student s5(9, 10, "darshan");
    s5.display();

    return 0;
}

/*
In C++, constructor is a special method which is invoked automatically at the time of object creation. It is used to initialize the data members of new object generally. The constructor in C++ has the same name as class or structure.

There can be two types of constructors in C++.
    ---> Default constructor
    ---> Parameterized constructor


1) Default Constructor: This will creat automatically.
   a)same name as class
   b)no return type
   c)no input arguments.

--> When we write our constructor internal constructor delete 
     automatically.                   

2) Parameterized Constructor called.

3) this keyword.

*/