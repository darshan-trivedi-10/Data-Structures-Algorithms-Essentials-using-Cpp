#include <bits/stdc++.h>
using namespace std;

int main()
{
    string para = "We are learning a find function in a string, I like string.";
    string word;
    getline(cin, word);

    // Find Function :
    int index = para.find(word);
    if (index == -1)
    {
        cout << "Word Not Found!\n";
    }
    else
    {
        cout << "First Occ " << index;
    }

    index = para.find(word, index + 1);
    if (index != -1)
    {
        cout << " Second Occ " << index;
    }
    cout << endl;

    cin >> word;
    index = para.find(word, index);
    while (index != -1)
    {
        cout << "Occ is : " << index << endl;
        index = para.find(word, index+1);
    }

    return 0;
}