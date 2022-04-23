/*
You Are Given number N, Print the number from N to 1;

Input : N = 5
Output : 5 4 3 2 1

*/
#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    cout << n << " ";
    print(--n);
}

void print1_to_N(int n)
{

    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    print1_to_N(n - 1);
    cout << n << " ";
}

int main()
{
    int n = 5;
    cin >> n;
    print(n);
    cout << endl;
    print1_to_N(n);

    return 0;
}