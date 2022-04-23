/*
You Are Given number N, Print the sum of digit.
Input : N = 5562
Output :  18

*/
#include <bits/stdc++.h>
using namespace std;

int sum_of_digit(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return (n % 10) + sum_of_digit(n / 10);
}

int main()
{
    int n;
    cin >> n;
    cout << sum_of_digit(n);

    return 0;
}