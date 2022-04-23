#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        bool flag = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = 0;
            }
        }

        if (flag)
            break;
    }
}

vector<int> optimizedBubbleSort(vector<int> v)
{
    // your code  goes here
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        bool flag = 1;
        for (int j = 0; j < (n - i - 1); j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                flag = 0;
            }
        }

        if (flag)
        {
            return v;
        }
    }

    return v;
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

    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
