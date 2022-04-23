#include <iostream>
#include "Trie.h"
using namespace std;

int main()
{
    string words[] = {"hello", "he", "apple", "news", "aple"};
    Trie t;

    for (auto word : words)
    {
        t.insert(word);
    }

    string key;
    cin >> key;

    cout << t.search(key) << endl;

    return 0;
}