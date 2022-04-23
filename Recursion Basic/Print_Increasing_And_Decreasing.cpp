#include <iostream>
using namespace std;

// Print Number 1...N recursively in 1) Desreasing order 2) Increasing order

int print_increasing(int n)
{
    if (n == 0)
    {
        return 0;
    }
    print_increasing(n - 1);
    cout << n << " ";
}

int print_decreasing(int n)
{
    if (n == 0)
    {
        return 0;
    }
    cout << n << " ";
    return print_decreasing(n - 1);
}

int main()
{
    int n;
    cin >> n;
    
    print_increasing(n);
    cout << endl;

    print_decreasing(n);
    cout << endl;

    return 0;
}
