/*
Game of Coins

Oswald and Henry are playing the game of coins. They have a row of 'n' coins [C1,C2,C3...Cn] with values [V1,V2,V3...Vn] where Ci coin has Vi value. They take turns alternatively. In one turn the player can pick either the first or the last coin of the row. Given both Oswald and Henry are very smart players, you need to find the maximum possible value Oswald can earn if he plays first.

Input Format:
In the function you are given an integer N i.e. the number of coins and a vector V which represents the values of each coin in the row respectively.

Output Format:
Return a single integer which is the maximum possible value as asked in the question.

Constraints:
1<=N<=15
1<=V[i]<=1000

Sample Testcase:

Input:
4
1 2 3 4

Output:
6

Explanation:
Oswald will pick up coin with value 4, Henry will pick coin with value 3, Oswald will pick 2 and Henry will pick 1. Hence 4+2=6.
*/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

#include <bits/stdc++.h>
using namespace std;

int ans;
void solve(vector<int> &arr, int i, int j, int cs)
{
    if (i >= j)
    {
        cout << cs << " ";
        ans = max(ans, cs);
        return;
    }

    if (i % 2 == 0)
    {
        cs += arr[i];
        solve(arr, i + 1, j - 1, cs);
        cs -= arr[i];
        cs += arr[j];
        solve(arr, i + 1, j - 1, cs);
    }
    else
    {
        i++, j--;
        solve(arr, i, j, cs);
    }
}

int MaxValue(int n, vector<int> arr)
{
    ans = INT_MIN;
    solve(arr, 0, n - 1, 0);
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cout << MaxValue(4, {1, 2, 3, 4});

    return 0;
}