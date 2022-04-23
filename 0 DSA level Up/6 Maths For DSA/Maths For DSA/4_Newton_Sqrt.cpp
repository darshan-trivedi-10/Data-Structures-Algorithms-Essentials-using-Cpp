#include <bits/stdc++.h>
using namespace std;

//  O(Logn) Time
double Sqrt(double n, int p = 3)
{
    double x = n;
    double root;
    while (true)
    {
        root = 0.5 * (x + (n / x));
        if (abs(root - x) < (0.5))
        {
            break;
        }
        x = root;
    }

    return root;
}

int main()
{

    cout << Sqrt(36);

    return 0;
}