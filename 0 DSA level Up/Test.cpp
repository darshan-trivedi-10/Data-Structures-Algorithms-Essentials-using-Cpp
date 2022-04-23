
#include <bits/stdc++.h>
using namespace std;

long long int fibo(long long int n)
{
    return (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << fibo(n) << endl;
    }

    return 0;
}