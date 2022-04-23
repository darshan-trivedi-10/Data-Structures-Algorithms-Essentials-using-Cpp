/*
You Are Given number N. check the number is Palindrome or not.
Input : N = 1234
Output : No

Input : N = 1221
Output : Yes

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

bool Palindrome(int n)
{
    return n == reverse(n, 0);
}

int main()
{
    int n;
    cin >> n;
    cout << Palindrome(n);

    return 0;
}
