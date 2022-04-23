#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class student
{
    int age;
    char *name;

public:
    student(int age, char *name)
    {
        this->age = age;
        /*
        shallow copy.
        this->name = name;
        */

        //Deep Copy.
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        cout << endl;
        display();
    }

    // Copy Constructor
    student(student const &s)
    {
        this->age = s.age;
        // this->name = s.name;  // Shallow Copy

        // Deep Copy
        this->name = new char[strlen(s.name) + 1];
        strcpy(this->name, s.name);
    }

    void display()
    {
        cout << name << " " << age << endl;
    }
};

int main()
{
    char name[] = "abcd";
    student s1(10, name);
    student s2(s1);
    s1.display();
    s2.display();

    return 0;
}

/*
---> Inbuilt Copy Constructor use Shallow Copy.
*/