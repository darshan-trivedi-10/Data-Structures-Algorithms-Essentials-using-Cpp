#include <bits/stdc++.h>
using namespace std;

void CyclicSort(vector<int> &arr)
{
    int i = 0, n = arr.size();
    while (i < n)
    {
        if ((arr[i] - 1) != i)
        {
            swap(arr[i], arr[arr[i] - 1]);
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    CyclicSort(arr);

    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}