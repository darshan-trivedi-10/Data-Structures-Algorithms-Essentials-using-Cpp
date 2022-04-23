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

    //  Default Destructor
    ~student()
    {
        cout << "Default Desteuctor Called!\n";
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
1)-->Copy Constructor-->Direct copy student s1 value in student s1
                       for this we don not anythik bcz we have copy constructor.
copy assignment operator (=) ;

2)Destructor --> Deallocate object memory
                2.1) Same name as our Class
                2.2) No return type
                2.3) No input argument.

Destructor symbol ~student(){}


*/