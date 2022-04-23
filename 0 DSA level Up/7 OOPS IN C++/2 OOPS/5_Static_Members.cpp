#include <bits/stdc++.h>
using namespace std;

class student
{
    static int totalStudent; // total number of student present
public:
    int rollNumber;
    int age;
    student()
    {
        totalStudent++;
    }

    int getRollNumber()
    {
        return rollNumber;
    }

    static int getTotalStudent()
    {
        return totalStudent;
    }
};

int student ::totalStudent = 0; // initialze static data members

int main()
{
    student s1, s2, s3, s4, s5;
    student student_arr[100];
    cout << student::getTotalStudent() << endl;

    // cout << s1.totalStudent << endl;
    // s1.totalStudent = 10;
    // cout << student::totalStudent << endl;

    return 0;
}

/*
static which belong to the class
*/