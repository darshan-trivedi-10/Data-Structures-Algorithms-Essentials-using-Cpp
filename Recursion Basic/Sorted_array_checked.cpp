#include <iostream>
using namespace std;

// Check if array is sorted.
bool sorted_array_check(int arr[], int n)
{
    // Base Case :
    if (n == 1 || n == 0)
    {
        return true;
    }

    // Recursion Case
    if (arr[0] < arr[1] && sorted_array_check(arr + 1, n - 1))
    {
        return true;
    }

    return false;
}

bool sorted_array_check1(int arr[], int i, int n)
{
    // Base Case :
    if (i == n - 1)
    {
        return true;
    }

    if (arr[i] < arr[i + 1] and sorted_array_check1(arr, i + 1, n))
    {
        return true;
    }

    return false;
}

int main()
{
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
    cin >> arr[i];
    }

    cout << sorted_array_check(arr, n) << endl;
    cout << sorted_array_check1(arr, 0, n) << endl;

 
    return 0;
}