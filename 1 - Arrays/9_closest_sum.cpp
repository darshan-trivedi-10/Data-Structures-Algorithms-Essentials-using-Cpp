#include <bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/given-sorted-array-number-x-find-pair-array-whose-sum-closest-x/

pair<int, int> closestSum(vector<int> arr, int x)
{
    // your code goes here
    int s = 0, e = arr.size() - 1, sum = 0, cs = 0;
    pair<int, int> ans;
    while (s <= e)
    {
        cs = arr[s] + arr[e];
        if (cs < x && cs > sum)
        {
            sum = cs;
            ans.first = arr[s], ans.second = arr[e];
            cs = sum;
        }
        s++, e--;
    }

    return ans;
}

int main()
{

    return 0;
}
