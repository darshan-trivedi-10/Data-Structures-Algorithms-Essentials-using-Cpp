/*
Problem : You are Given an array with n element. all of the element
              appers twice only one number apperes one. You have to find that Number.

Input : arr = [2, 3, 4, 1, 2, 1, 3, 6, 4]
                      
Output : 6
*/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
#define M 1000000007
#define endl '\n'

int find_Unique(vector<int> &arr)
{
    int n = arr.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans ^= arr[i];
    }

    return ans;
}

int main()
{

    vector<int> arr = {2, 3, 4, 1, 2, 1, 3, 6, 4};
    cout << find_Unique(arr);

    return 0;
    cout << "Darshan\n";
}