// Find the sum of n-th row in Pascal Triangle.
/*
1
1   1  
1   2     1
1   3    3     1
1   4    6     4    1
1   5    10   10   5  1


*/

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
#define M 1000000007
#define PI 3.1415926535897932384626433832795
#define endl '\n'

#define ha cout << "YES \n";
#define na cout << "NO\n";
#define all(z) z.begin(), z.end()
#define ff first
#define ss second
#define um unordered_map
#define us unordered_set
#define pb emplace_back

void ans()
{
    int n;
    cin >> n;
    cout << (1 << (n - 1)) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int s = 1;
    bool ray = 0;
    int t = 1;
    //cin>>t
    while (t--)
    {
        if (ray)
            cout << "Case #" << s << ": ";
        ans();
        s++;
    }
    return 0;
}