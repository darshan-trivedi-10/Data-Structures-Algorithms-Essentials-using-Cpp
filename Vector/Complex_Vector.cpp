#include <bits/stdc++.h>
using namespace std;

int sum(vector<int> a)
{
    return a[0] + a[1] + a[2];
}

bool cmp(pair<string, vector<int>> a, pair<string, vector<int>> b)
{
    return sum(a.second) > sum(b.second);
}

int main()
{
    vector<pair<string, vector<int>>> students_mark =
        {{"Rohan", {10, 20, 11}},
         {"Prateek", {10, 21, 3}},
         {"Darshan", {40, 40, 40}},
         {"sdt", {39, 40, 40}}};

    sort(students_mark.begin(), students_mark.end(), cmp);
    for (auto it : students_mark)
    {
        cout << it.first << " " << sum(it.second) << endl;
    }

    return 0;
}