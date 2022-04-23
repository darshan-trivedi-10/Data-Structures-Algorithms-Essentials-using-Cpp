/*
You Are Given number N. Reverse a Number.
Input : N = 1234
Output : 4321 



//  Delete Instragram at 11 : 00
*/
#include <bits/stdc++.h>
using namespace std;

int reverse(int num, int sum)
{
    if (num == 0)
        return sum;

    sum = (sum * 10) + (num % 10);
    reverse(num / 10, sum);
}

int main()
{
    int n;
    cin >> n;
    cout << reverse(n, 0);

    return 0;
}