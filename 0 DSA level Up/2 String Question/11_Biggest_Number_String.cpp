/*
Biggest Number String
You are given a vector of numbers. You want to concatenate these numbers together to form the lexicographically largest number. Print that largest number number. You can't rearrange the digits of any number, however you can place the numbers next to each other in any order.

Input
10,11,20,30,3

Output
330201110 
You can verify that this is the largest number that we can form.

Hint
Use Sorting.
(This is a bit tricky problem, we have discussed a similar problem in sorting & searching section - Smallest String. In case you are not able to solve it right now, you can come back and solve it later)conc
*/

#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b)
{
    string a1 = to_string(a);
    string a2 = to_string(b);

    return (a1 + a2) > (a2 + a1);
}
string concatenate(vector<int> numbers)
{
    //complete this method and return the largest number you can form as a string
    string ans = "";
    sort(numbers.begin(), numbers.end(), cmp);
    for (auto it : numbers)
    {
        string temp = to_string(it);
        ans += temp;
    }

    return ans;
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

    cout << concatenate(a);

    return 0;
}