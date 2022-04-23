#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {10, 11, 15, 18, 20, 25, 26, 45, 100};

    int n = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;
    int index = binary_search(arr, n, key);

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
Time Complexity : O(logn)
*/