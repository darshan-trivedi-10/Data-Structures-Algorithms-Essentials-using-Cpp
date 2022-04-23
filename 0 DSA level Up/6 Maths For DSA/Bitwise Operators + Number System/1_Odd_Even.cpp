/*
Question : Given Number N Find the number is odd 
                 or even.
*/
#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
#define M 1000000007
#define endl '\n'

int main()
{
    int t;
    cin >> t;
    while (t-- && t > 0)
    {
        int num;
        cin >> num;
        if (num & 1)
        {
            cout << "Number " << num << " is Odd.\n";
        }
        else
        {
            cout << "Number " << num << " is Even.\n";
        }
    }

    return 0;
}
