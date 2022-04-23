#include <iostream>
using namespace std;

int linear_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        // Check if current elements matches with the key or not
        if (arr[i] == key)
            return i;
    }

    // out of the loop
    return -1;
}

int main()
{
    int arr[] = {10, 3, 5, 7, 3, 6, 8, 0, 2, 3};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    int index = linear_search(arr, n, key);

    if (index != -1)
    {
        cout << key << " is present at index " << index << '\n';
    }
    else
    {
        cout << key << " is NOT Found!\n";
    }

    return 0;
}

/*
Time Complexity : O(N)
*/