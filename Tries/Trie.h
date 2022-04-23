#include <unordered_map>
#include <string>
using namespace std;
class Trie;
class node
{
    char data;
    unordered_map<char, node *> m;
    bool isterminal;

public:
    node(char data)
    {
        this->data = data;
        isterminal = false;
    }

    friend class Trie;
};

class Trie
{
    node *root;

public:
    Trie()
    {
        root = new node('\0');
    }
    // Insertion
    void insert(string word)
    {
        node *temp = root;
        for (auto it : word)
        {
            if (temp->m.count(it) == 0)
            {
                node *n = new node(it);
                temp->m[it] = n;
            }

            temp = temp->m[it];
        }

        temp->isterminal = true;
    }

    // Searching
    bool search(string word)
    {
        node *temp = root;
        for (auto it : word)
        {
            if (temp->m.count(it) == 0)
            {
                return false;
            }

            temp = temp->m[it];
        }
        return temp->isterminal;
    }
};