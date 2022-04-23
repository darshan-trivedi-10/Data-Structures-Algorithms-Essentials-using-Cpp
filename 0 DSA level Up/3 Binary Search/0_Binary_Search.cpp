#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
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
}
int main()
{

    return 0;
}