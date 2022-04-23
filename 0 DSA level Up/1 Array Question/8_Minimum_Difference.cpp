/*
Minimum Difference
Problem : Implement a function that takes in two non-empty arrays of integers, finds the pair of numbers (one from each array) who absolute difference is closest to zero, and returns a pair containing these two numbers, with the first number from array. Only one such pair will exist for the test.

Input :
Array1 = [23, 5, 10, 17, 30]
Array2 = [26, 134, 135, 14, 19]

Output :
[17,19]
*/
#include <bits/stdc++.h>
using namespace std;

pair<int, int> minDifference(vector<int> a, vector<int> b)
{
    //Complete this method
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0, min_sum = INT_MAX;
    pair<int, int> result;
    while (i < a.size() && j < b.size())
    {
        int curr_sum = abs(a[i] - b[j]);
        if (curr_sum < min_sum)
        {
            min_sum = curr_sum;
            result = make_pair(a[i], b[j]);
        }

        if (a[i] > b[j])
        {
            j++;
        }
        else
        {
            i++;
        }
    }

    return result;
}

int main()
{

    return 0;
}