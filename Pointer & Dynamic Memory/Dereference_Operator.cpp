#include <iostream>
using namespace std;

// Dereference Operator = *
int main()
{

    int x = 10;
    int *ptr = &x;
    int *p1 = 0;
    int *q = NULL;

    // Reference Variables.

    int x1 = 10;
    int &y = x1;
    y++; // Now, x1 and y is 11.
    x1++;
    cout << x1 << " " << y << '\n';

    return 0;
}

//