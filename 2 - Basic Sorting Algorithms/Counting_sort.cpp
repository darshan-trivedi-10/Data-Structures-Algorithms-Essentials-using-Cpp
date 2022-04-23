#include <iostream>
using namespace std;

void counting_sort(int arr[], int n)
{
    // find max element
    int max = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr  [i];
        }
    }

    // create frequency count array
    int freq[max + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // Update array
    int j = 0;
    for (int i = 0; i <= max; i++)
    {
        while (freq[i])
        {
            arr[j] = i;
            j++, freq[i]--;
        }
    }

    // Time Complexity : O(max_element + size of array).
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

    // sort array
    counting_sort(arr, n);

    // print array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}