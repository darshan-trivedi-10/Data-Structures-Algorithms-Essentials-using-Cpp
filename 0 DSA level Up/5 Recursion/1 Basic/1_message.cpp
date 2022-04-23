/*
Timestamps:
00:00:00 Introduction
00:06:29 Prerequisites
00:06:50 E1 : Message Program
00:13:03 E2 : Numbers Program
00:17:57 Working of function calls
00:30:02 What is Recursion?
00:31:10 Recursive Function for E2
00:35:35 Internal Working of Recursive Function
00:37:53 Base Condition in Recursion
00:45:36 Definition of Recursion
00:45:52 Use of Recursion
00:50:48 Visualising Recursion (Recursion Tree)
00:53:01 Q1 : Fibonacci Numbers
00:59:31 Identifying Recursion problem
00:59:49 Finding Base Condition
01:02:28 Code for Q1

************************************************************************

01:13:01 Tail Recursion
01:13:53 Best Approach for Recursion Problems
01:15:12 Understanding Recursion Tree
01:22:19 Key areas to be focused for Recursion
01:24:26 Q2 : Binary Search
01:27:54 Types of Recurrence Relation
01:34:07 Important Tip
01:38:04 When to take which variable?
01:44:33 Recursion Tree for Binary Search
01:50:28 Outro





*/

#include <bits/stdc++.h>
using namespace std;
void message4()
{
    cout << "Hello World\n";
}

void message3()
{
    cout << "Hello World\n";
    message4();
}
void message2()
{
    cout << "Hello World\n";
    message3();
}

void message1()
{
    cout << "Hello World\n";
    message2();
    cout << "Darshan--> \n";
}
void message()
{
    cout << "Hello World\n";
    message1();
    cout << "Darshan \n";
}

int main()
{
    message();

    return 0;
}