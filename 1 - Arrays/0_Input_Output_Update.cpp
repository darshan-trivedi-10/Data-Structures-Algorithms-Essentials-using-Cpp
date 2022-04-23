#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no of students ";
    cin >> n;

    // Declare the array
    int marks[n] = {-1};
    //Input
    for (int i = 1; i <= n; i++)
    {
        cin >> marks[i];
        //Update
        marks[i] = marks[i] * 2;
    }

    // Accesses the Array
    for (int i = 0; i < 100; i++)
    {
        cout << marks[i] << " ,";
    }
    cout << endl;

    return 0;
}