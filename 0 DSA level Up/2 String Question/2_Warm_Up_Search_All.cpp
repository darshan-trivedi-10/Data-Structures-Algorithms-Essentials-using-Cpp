/*
Warm Up - Search All!
Implement a function that returns a list of all occurrences of a given  substring inside a big string.
Return empty vector if smaller string is not present inside bigger string.

Sample Input
string bigString = "I liked the movie, acting in movie was great!";
string smallString = "movie"

Sample Output
12, 29
*/
#include <bits/stdc++.h>
using namespace std;

vector<int> stringSearch(string big, string small)
{
    vector<int> result = {};
    int index = big.find(small, index);
    while (index != -1)
    {
        result.push_back(index);
        index = para.find(word, index + 1);
    }

    return result;
}
