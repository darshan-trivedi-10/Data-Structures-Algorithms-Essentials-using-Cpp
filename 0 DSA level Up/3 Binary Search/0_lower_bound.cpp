/*
Question : You are given an array. and integer X (X>0). find the first 
                 element which is not less than X. if element is greater than all return -1.

Input : arr = [2,3,5,9,14,16,18] , target = 14
Output : ans = [14]

Input : arr = [1,5,7,7,8,10,10,10,11,11,12] , target = 9
Output : ans = [10]
*/

#include <bits/stdc++.h>
using namespace std;

//  Time Complexity : O(logn).
int l_bound(vector<int> arr, int x)
{
    int s = 0, e = arr.size() - 1, element = INT_MAX;
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (arr[m] == x)
        {
            return arr[m];
        }
        else if (arr[m] < x)
        {
            s = m + 1;
        }
        else
        {
            element = min(arr[m], element);
            e = m - 1;
        }
    }

    return ((element == INT_MAX) ? -1 : element);
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
    int x;
    cin >> x;
    cout << l_bound(arr, x) << endl;

    return 0;
}

/*

7
2 3 5 9 14 16 18

*/

