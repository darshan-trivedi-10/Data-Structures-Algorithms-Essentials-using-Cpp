/*
Game of Greed

Problem : You are playing a game with your 'k' friends. You have an array of N coins, at each index i you have a coin of value a[i]. Your task is to divide the coins, among a group of K friends by doing consecutive segments (k-subarrays) of the array.
Each friend will get a total sum of the coins in that subarray. Since all your friends are greedy, and they will pick the largest k-1 segments and you will get the smallest segment. Find out the maximum value you can make by making an optimal partition.
Note : The coins array may or may not be sorted!
(Refer Hints at the end if needed)

Input
K = 3
coins = {1,2,3,4};

Output
3

Explanation 
The ideal partition looks like this -
{1 + 2} = 3
{3} = 3
{4} = 4
You will get a maximum of 3 coins in the best case.

HINTS
======
Hint  1 : Can you apply recursion, Brute force?

Hint 2 : Can you apply Binary Search, is the search space monotonic?

Hint 3:  You can do binary search on search space (MIN, MAX) where Min is the smallest coin denomination in the array and MAX is the sum of all coins in the array.
*/

#include <bits/stdc++.h>
using namespace std;

int getCoins(vector<int> arr, int k)
{
    //return the max coins that you can win!
}