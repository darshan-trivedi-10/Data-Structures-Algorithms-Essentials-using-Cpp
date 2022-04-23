#include <bits/stdc++.h>
using namespace std;

int trap(vector<int> &height)
{
    
    if (n <= 2)
    {
        return 0;
    }
    int n = height.size(), m1 = INT_MIN, m2 = INT_MIN, trapping = 0;
    vector<int> left(n), right(n);
    for (int i = 0; i < n; i++)
    {
        m1 = max(m1, height[i]);
        left[i] = m1;
        m2 = max(m2, height[n - i - 1]);
        right[n - i - 1] = m2;
    }

    for (int i = 0; i < n; i++)
    {
        trapping += min(left[i], right[i]) - height[i];
    }
    return trapping;
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
    cout << trap(arr);

    return 0;
}