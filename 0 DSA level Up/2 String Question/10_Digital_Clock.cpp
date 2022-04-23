/*
Digital Clock :

You are building a logic for a clock that requires you convert absolute time in minutes into a format supported by a digital clock. See examples below.
125 minutes can be displayed as 2:05
155 minutes can be displayed as 2:35
(You can assume the maximum value of minutes will be less than 24 X 60)

Input
Input is a single integer.
1180

Output
Output is a string denoting the digital clock time.
19:40

Hint
You can use the to_string(int)  method to convert an integer into string.
*/

#include <bits/stdc++.h>
using namespace std;

string convert_to_digital_time(int minutes)
{
    //complete this function
    int first = (minutes / 60);
    string ans = to_string(first);
    ans.push_back(':');
    int last = minutes - (first * 60);
    if (last == 0)
    {
        ans += "00";
    }
    else
    {
        string me = to_string(last);
        if (me.size() == 1)
        {
            ans += "0";
        }
        ans += me;
    }

    return ans;
}
int main()
{
    cout << convert_to_digital_time(1180);

    return 0;
}