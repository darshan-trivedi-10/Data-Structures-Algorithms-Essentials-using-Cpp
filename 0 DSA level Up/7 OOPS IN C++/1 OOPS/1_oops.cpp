#include <iostream>
using namespace std;

/* 
 Here we Created two object class. student and product. each class has diffrent properity. 

Access Modifiers :
1 --> Public 
2 --> Private
3 --> Protected

Default is Access Modifiers private.

 */
class student
{
public:
    int rollNumber;
    string name;
    int age;
};

class product
{
    float price;
    float weight;
    int id;
};

int main()
{
    // Create Object statically
    student s1;
    s1.name = "Darshan";
    s1.age = 18;
    s1.rollNumber = 9;
    cout << s1.name << endl;
    cout << s1.rollNumber << endl;
    cout << s1.age << endl;

    // Create Object Dynamically
    student *s2 = new student;
    s2->name = "Agni"; //     (*s2).name = "Agni";
    s2->age = 18;
    s2->rollNumber = 10;

    return 0;
}