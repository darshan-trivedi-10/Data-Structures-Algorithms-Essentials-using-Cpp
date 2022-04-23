#include <bits/stdc++.h>
using namespace std;

void push_number(int n, stack<int> &s)
{
    while (n)
    {
        s.push(n % 10);
        n /= 10;
    }
}
int reverse(int n)
{
    stack<int> s;
    push_number(n, s);
    int i = 1;
    int ans = 0;
    while (!s.empty())
    {
        ans += (i * (s.top()));
        s.pop();
        i *= 10;
    }
    return ans;
}

int main()
{

    int n;
    cin >> n;
    cout << reverse(n) << endl;

    return 0;
}