#include <iostream>
using namespace std;

void Insertion_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
            else
            {
                break;
            }
        }
    }

    // Time Complexity : O(N^2)
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

    Insertion_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
0:00 Introduction
0:40 Insertion Sort
16:23 Complexity of Insertion Sort
16:43 Worst Case
19:07 Best Case
21:03 Why use Insertion Sort?
24:24 Code for Insertion Sort
30:18 Outro
*/

// 5 4 3 2 1