#include <iostream>
using namespace std;

// Problem : Print all subarrays of a given array.
void printsubsrray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << ", ";
            }
            cout << endl;
        }
    }
}

int max_subarraysum(int arr[], int n)
{
    int max = (-2147483648);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            if (max < sum)
                max = sum;
        }
    }

    return max;

    // Time Complexity : O(N^3).
}

int max_subarraysum_using_prefix_sum(int arr[], int n)
{
    int prefix[n];
    for (int i = 0; i < n; i++)
    {
        prefix[i] = arr[i];
        if (i)
            prefix[i] += prefix[i - 1];
    }

    int max = (-2147483648);
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = (i) ? sum = prefix[j] - prefix[i - 1] : prefix[j];
            if (max < sum)
                max = sum;
        }
    }

    return max;

    // Time Complexity : O(N^2), space Complexity : O(N).
}

int Kadane_Algorithms(int arr[], int n)
{
    int cs = 0, ls = 0;
    int max_element = (-2147483648);
    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        cs = cs + arr[i];
        if (cs < 0)
        {
            cs = 0;
        }
        ls = max(ls, cs);
        if (arr[i] >= 0)
        {
            check = 0;
        }

        if (arr[i] > max_element)
            max_element = arr[i];
    }

    if (check)
    {
        return max_element;
    }
    else
    {
        return ls;
    }

    // Time Complexity : O(N).
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        // cin >> a[i];
        a[i] = i + 1;
    }

    cout << max_subarraysum(a, n) << endl;
    cout << max_subarraysum_using_prefix_sum(a, n) << endl;
    cout << Kadane_Algorithms(a, n) << endl;
    // printsubsrray(a, n);

    return 0;
}
