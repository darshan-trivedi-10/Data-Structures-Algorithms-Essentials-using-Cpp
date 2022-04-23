//  Reverse The Array 
//  input    : 1 2 3 4 5
//  Output : 5 4 3 2 1
#include <iostream>
using namespace std;

void reversr_array(int arr[], int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++, end--;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    reversr_array(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << '\n';

    return 0;
}

/*
Brute Forces : Time Complexity : O(N), Space Complexity : O(N).
Best Apoorche : O(N).
*/