#include <iostream>
using namespace std;

/*
1) If we can access private member using function
 So why can't we make it public ?
 
 --> If we make member private , we can add some  
     condition or password to use function so some authorized people can access this member. 
*/
class student
{
private:
    int age;

public:
    int rollNumber;
    string name;

    void display()
    {
        cout << "Name : " << name << ",\n";
        cout << "Roll - Number : " << rollNumber << ",\n";
        cout << "Age : " << age << "\n\n";
    }

    //  Setter
    void setAge(int n)
    {
        if (n < 0)
        {
            cout << "Enter Correct Age:)\n";
            return;
        }

        age = n;
    }

    // Getter
    int getAge()
    {
        return age;
    }
};

int main()
{
    // Create Object statically
    student s1;
    s1.name = "Darshan";
    s1.setAge(18);
    s1.rollNumber = 9;
    s1.display();

    // Create Object Dynamically
    student *s2 = new student;
    s2->name = "Agni";
    s2->setAge(18);
    s2->rollNumber = 10;
    s2->display();

    return 0;
}