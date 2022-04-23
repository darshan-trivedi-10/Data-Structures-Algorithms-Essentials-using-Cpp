#include <iostream>
using namespace std;

int fibonacci(int n)
{
    // 1 1 2 3 5 8 13
    if (n == 1 || n == 0)
    {
        return n;
    }
    
    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n);

    return 0;
}