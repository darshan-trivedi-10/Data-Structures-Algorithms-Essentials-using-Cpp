/*
// https://afteracademy.com/blog/search-an-element-in-a-sorted-and-infinite-array
Problem Description: You are given a sorted and infinite array A[] and an element K. You need to search for the element K in the array. If found, return the index of the element, else return -1. target is in the range all array min and max element.

For Example :

Input: A[] = {1,3,5,8,12,13,17,19,28,39,103,123,140,2040,…}, K = 17

Output: 6

Input: A[] = {10,20,25,30,67,93,159,192,350,1230,1341,4533,…}, K = 23

Output: -1

Possible questions to ask the interviewer:-

What is the meaning of infinite array ? (Ans: We don't know the upper bound of the array)
How big can the resultant index be? (Ans: Ignore the integer overflow problem, we just want to check your logic, let us assume integer overflow won’t occur)
*/

#include <bits/stdc++.h>
using namespace std;

int Binary_Search(int arr[], int s, int e, int key)
{
    while (s <= e)
    {
        int m = (s + e) / 2;
        if (arr[m] == key)
        {
            return m;
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

    return -1;
}

int search_infiniteArray(int arr[], int target)
{
    int l = 0;
    int r = 1;
    while (arr[r] < target)
    {
        l = r;
        r = 2 * r;
    }

    return Binary_Search(arr, l, r, target);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cin >> target;
    cout << search_infiniteArray(arr, target);

    return 0;
}
