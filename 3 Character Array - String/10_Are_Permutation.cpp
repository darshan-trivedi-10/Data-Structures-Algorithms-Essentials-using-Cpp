/*

Are_Permutation.cpp
Given two strings A and B. Check if one string is palindrome of the other.
A Permutation of a string is another string that contains same characters, only the order of characters can be different. For example, “abcd” and “dabc” are Permutation of each other.

Input Format
In the function two strings passed.

Output Format
Return true if B is palindrome of A else false.

Sample Input
string A = "test", B = "ttew"

Sample Output
NO

*/

#include <iostream>
using namespace std;

#define NO_OF_CHARS 256

bool arePermutation(string str1, string str2)
{
    int count[NO_OF_CHARS] = {0};
    int i;
    // For each character in input strings,
    // increment count in the corresponding
    // count array
    for (i = 0; str1[i] && str2[i]; i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    // If both strings are of different length.
    // Removing this condition  will make the
    // program fail for strings like "aaca" and
    // "aca"
    if (str1[i] || str2[i])
        return false;

    // See if there is any non-zero value in
    // count array
    for (i = 0; i < NO_OF_CHARS; i++)
        if (count[i])
            return false;
    return true;
}

int main()
{

    return 0;
}

