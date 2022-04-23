/*
Given a sorted array which can contain repeated elements, and an element k, we need to find the frequency of a given element.

Input : arr = [0,1,1,1,1,2,2,2,2,3,4,4,5,10]
key = 3
output : 3

13
0 1 1 2 3 3 3 3 4 5 5 5 10
solustion : implement lower_bound and upperbound  
*/

#include <bits/stdc++.h>
using namespace std;


int l_bound(vector<int> &arr, int key)
{
    int s = 0, e = arr.size();
    int ans = -1;
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (arr[m] == key)
        {
            ans = m;
            e = m - 1;
        }
        else if (arr[m] > key)
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }

    return ans;
}

int u_bound(vector<int> &arr, int key)
{
    int s = 0, e = arr.size();
    int ans = -1;
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (arr[m] == key)
        {
            ans = m;
            s = m + 1;
        }
        else if (arr[m] > key)
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }

    return ans;
}

//  Time Complexity : O(2 * logn)
int frequency_count(vector<int> &arr, int key)
{
    int lb = l_bound(arr, key);
    int ub = u_bound(arr, key);
    if (lb == -1 || ub == -1)
    {
        return 0;
    }

    return (ub - lb + 1);
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

    int key;
    cin >> key;

    cout << frequency_count(arr, key) << endl;

    //STL
    cout << (*upper_bound(arr.begin(), arr.end(), key)) << endl;
    cout << (*lower_bound(arr.begin(), arr.end(), key)) << endl;
    cout << upper_bound(arr.begin(), arr.end(), key) - lower_bound(arr.begin(), arr.end(), key) << endl;

    return 0;
}
