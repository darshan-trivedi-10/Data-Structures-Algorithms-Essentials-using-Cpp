#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{

    // your code goes here
    unordered_map<int, int> um;
    vector<int> ans;
    int n1 = nums1.size(), n2 = nums2.size();
    if (n1 < n2)
    {
        for (auto it : nums1)
        {
            um[it]++;
        }

        for (auto it : nums2)
        {
            if (um[it] > 0)
            {
                ans.push_back(it);
                um[it] = 0;
            }
        }
    }
    else
    {
        for (auto it : nums2)
        {
            um[it]++;
        }
        for (auto it : nums2)
        {
            if (um[it] > 0)
            {
                ans.push_back(it);
                um[it] = 0;
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> a = {1, 2, 2, 1};
    vector<int> b = {2, 2};

    a = intersection(a, b);
    for (auto it : a)
    {
        cout << it << endl;
    }

    return 0;
}
