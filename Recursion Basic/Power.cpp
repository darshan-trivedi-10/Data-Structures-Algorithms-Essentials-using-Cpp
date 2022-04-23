#include <iostream>
using namespace std;

// Write a Function to find First Occurence of an element in an array using recursion.

int power(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }

    return a * power(a, n - 1);
}
int fastpower(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }

    int ans = fastpower(a, n / 2);
    ans = ans * ans;

    if (n & 1)
    {
        return a * ans;
    }

    return ans;
}

int main()
{

    int a, b;
    cin >> a >> b;
    cout << power(a, b) << endl;
    cout << fastpower(a, b);

    return 0;
}