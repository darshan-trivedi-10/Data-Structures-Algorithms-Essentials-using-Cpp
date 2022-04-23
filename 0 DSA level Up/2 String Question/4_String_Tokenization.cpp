/*
Tokenizing a string denotes splitting a string with respect to some delimiter(s).

Input :
"today is a sunny day"

output :
"today", "is", "a", "sunny", "day"

solution :
string Tokenization in C++
1. Using stringstream class
2. Using strtok function

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hi! I am Darshan Trivedi";
    // create a string stream object
    stringstream ss(str);

    // >> and << operators
    string token;
    vector<string> tokens;
    while (getline(ss, token, ' '))
    {
        tokens.push_back(token);
    }

    // Print all the tokens
    for (auto it : tokens)
    {
        cout << it << " ,";
    }
    cout << endl;

    return 0;
}

