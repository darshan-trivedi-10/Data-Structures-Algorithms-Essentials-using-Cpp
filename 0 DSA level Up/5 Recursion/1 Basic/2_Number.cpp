#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    //  Base Condition
    cout << n << " ";
    if (n == 5)
        return;
    
    // This is recursive call.
    print(++n);
}

int main()
{
    print(1);

    return 0;
}