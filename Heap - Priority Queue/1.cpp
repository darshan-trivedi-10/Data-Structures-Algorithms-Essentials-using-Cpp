#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int> nums)
{
    // your code goes here
    priority_queue<int> a;
    for (int i = 0; i < nums.size(); i++)
    {
        a.push(nums[i] - 1);
    }

    int a1 = a.top();
    a.pop();

    return a1 * a.top();
}
