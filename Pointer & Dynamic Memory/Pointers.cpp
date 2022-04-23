#include <iostream>
using namespace std;

int main()
{

    int x = 10;
    int *ptrx = &x;
    cout << ptrx << endl;  // Give Address
    cout << *ptrx << endl; // Give Value
    int **ptr = &ptrx;
    cout << ptr << endl;

    return 0;
}

// Pointer is a variable that holds the address of another variable.

// * == asterisk 