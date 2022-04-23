#include <iostream>
using namespace std;

// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/discuss/391834/simple-solution-using-binary-search-recursive-iterative-approach

void random_array_input(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // cin >> a[i];
        int x = rand();
        a[i] = x;
        if (i & 1)
        {
            a[i] = -a[i];
        }
    }
}
// s = start, e = end
int partition(int arr[], int s, int e)
{
    int pivot = arr[e];
    int i = s - 1;
    for (int j = s; j < e; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[e]);

    return (i + 1);
}

void quicksort(int arr[], int s, int e)
{
    if (s < e)
    {
        int p = partition(arr, s, e);
        quicksort(arr, s, p - 1);
        quicksort(arr, p + 1, e);
    }
}

int main()
{
    // /*
    int n = rand();
    int a[n];
    random_array_input(a, n);
    // */
    /*
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    */

    quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
