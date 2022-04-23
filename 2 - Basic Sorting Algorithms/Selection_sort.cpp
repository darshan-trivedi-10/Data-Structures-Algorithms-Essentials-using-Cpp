#include <iostream>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        // find minimum element
        int min = arr[i], index = i;
        ;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                index = j;
            }
        }
        // swap with minimum elements.
        swap(arr[i], arr[index]);
    }

    // Time Complexity : O(N^2).
}

void selection_sort1(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int max_e = arr[i], index = i;
        for (int j = i - 1; j >= 0; j--)
        {
            if (max_e < arr[j])
            {
                max_e = arr[j];
                index = j;
            }
        }

        swap(arr[index], arr[i]);
    }
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

    selection_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

