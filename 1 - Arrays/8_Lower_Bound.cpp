/*
Lower Bound
Given an array of integers A (sorted) and a integer Val.
Implement a function that takes A and Val as input parameters and returns the lower bound of Val.
Note : Lower bound of a given integer means integer which is just smaller than given integer.

Example 1  :
A = [-1, -1, 2, 3, 5]
Val = 4
Answer :  3
Since 3 is just smaller than 4 in the array.

Example 2  :
A = [1, 2, 3, 4, 6]
Val = 4
Answer :  4
Since 4 is equal to 4.

*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int lowerBound(vector<int> A, int Val)
{
    // your code goes here
    for (int i = A.size() - 1; i >= 0; i--)
    {
        if (A[i] <= Val)
        {
            return A[i];
        }
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int val;
    cin >> val;

    int max = lowerBound(a, val);
    cout << max << endl;

    return 0;
}
