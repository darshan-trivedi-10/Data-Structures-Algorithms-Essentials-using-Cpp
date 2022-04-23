
#include <iostream>
using namespace std;

class student
{
private:
    int age;

public:
    int const rollNumber;
    string name;
    int &x; // Age reference variable.

    // Constructor with one argument called.
    // student(int r) : rollNumber(r)
    // {
    //     cout << "One Parameterized Constructor called\n";
    // }

    // Constructor with two argument called.
    student(int rollNumber, int age, string name) : rollNumber(rollNumber), age(age), name(name), x(this->age)
    {
        cout << "Three Parameterized Constructor called\n";
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
    student s1(9, 18, "DBT");
    s1.display();

    return 0;
}
