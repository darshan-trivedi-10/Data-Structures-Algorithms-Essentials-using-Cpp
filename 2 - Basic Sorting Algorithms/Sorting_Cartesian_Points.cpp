/*
Udemy
Data Structures & Algorithms Esse…Data 
Structures & Algorithms Essentials (2021)

Sorting Cartesian Points

Problem : Given co-ordinates of N points on X-Y axis, your task is to sort them in accordance to the x-coordinate. If the x-coordinates are same then compare y-coordinates.

Input Format
In the function an integer vector of pairs is passed.

Output Format
Return the vector in sorted order.

Sample Input
{ (3, 4), (2, 3), (3, 7), (1, 5), (3, 4) } 

Sample Output
{ (1, 5), (2, 3), (3, 4), (3, 4), (3, 7) } 

*/
#include <iostream>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }

    return a.first < b.first;
}

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    int N = v.size();
    // your code goes here
    sort(v.begin(), v.end(), cmp);
    return v;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vp(n);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        vp.push_back({a, b});
    }

    sortCartesian(vp);

    for (int i = 0; i < n; i++)
    {
        cout << vp[i].first << " " << vp[i].second << endl;
    }

    return 0;
}