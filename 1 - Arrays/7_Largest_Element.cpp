/*
Largest Element
Implement a function that takes array of integers as input and returns the largest element.

Input :          
-3 4 1 2 3     
Output : 
4

Input :
-1 -2 -3 -3 8
Sample 
8

Explanation : for test case one, 4 is the largest integer in the array.
Similarly for test case two, 8 is the largest integer in the array.
*/

#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr)
{
    int max = INT_MIN;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{

    //  Checking Code ........................:)

    return 0;
}