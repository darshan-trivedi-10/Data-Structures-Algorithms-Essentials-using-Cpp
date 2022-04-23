#include <bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> &a, int k)
{
    int n = a.size();
    if (k < 0)
    {
        k += n;
    }

    if (k > n)
    {
        k %= n;
    }
    reverse(a.begin(), a.begin() + (n - k));
    reverse(a.begin() + (n - k), a.end());
    reverse(a.begin(), a.end());
    return a;

    // Time Complexity : O(N)
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

    int k;
    cin >> k;

    kRotate(a, k);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

/*

arr = [1, 2, 3, 4, 5, 6, 7] and k = 3

ans is arr = [5, 6, 7, 1, 2, 3, 4]
 
===> We Devide array in two parts first is o to (n-k-1) and second is (n-k) to n.
    arr = [1, 2, 3, 4] and [5, 6, 7];

==> After we reverse two part of array.
    arr = [4, 3, 2, 1] and [7, 6, 5];

==> After we reverse all array and join that array.
    arr = [5, 6, 7, 1, 2, 3, 4];

And, We Get the answers.

*/