#include <iostream>
using namespace std;

int fact(int n)
{

    // Base Case
    if (n == 0)
    {
        return 1;
    }

    return n * fact(n - 1);
    // Time & Space Complexity both are O(N); space Complexity because of Extra space.
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n) << endl;

    return 0;
}