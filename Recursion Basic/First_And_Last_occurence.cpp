#include <iostream>
using namespace std;

// Write a Function to find First Occurence of an element in an array using recursion.
int First_occurence(int arr[], int n, int key)
{
    if (n == 0)
    {
        return -1;
    }
    if (arr[0] == key)
    {
        return 0;
    }

    int subindex = First_occurence(arr + 1, n - 1, key);
    if (subindex != -1)
    {
        return ++subindex;
    }

    return -1;
}

int last_occurence(int arr[], int n, int key)
{
    // Base Case
    if (n == 0)
    {
        return -1;
    }

    if (arr[n - 1] == key)
    {
        return (n - 1);
    }

    return last_occurence(arr, n - 1, key);
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

    int key;
    cin >> key;

    cout << First_occurence(arr, n, key) << endl;
    cout << last_occurence(arr, n, key) << endl;

    return 0;
}