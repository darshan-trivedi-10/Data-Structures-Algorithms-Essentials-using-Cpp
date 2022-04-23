#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int a, int b)
{
    // Accending order
    return a > b;
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

    sort(arr, arr + n);
    sort(arr, arr + n, cmp);
    // sort(arr, arr + n, greater<int>(  ));

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}