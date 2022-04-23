// File : HashTable.h
#include <iostream>
#include <string>
using namespace std;

template <typename T>
class node
{
public:
    T value;
    string key;
    node *next;
    node(string key, T value)
    {
        this->key = key;
        this->value = value;
        next = NULL;
    }

    ~node()
    {
        if (next != NULL)
        {
            delete next;
        }
    }
};
template <typename T>
class HashTable
{
    node<T> **table;
    int cs; // total entries that have been inserted
    int ts; // size of table
    int hashFn(string key)
    {
        int idx = 0, power = 1;
        for (auto it : key)
        {
            idx = (idx + it * power) % ts;
            power = (power * 29) % ts;
        }

        return idx;
    }

    void reHash()
    {
        //  save the pointer to the ols tavle and we will do insertions in the new table.
        node<T> **oldTable = table;
        int olsts = ts;
        cs = 0;
        ts = (ts * 2) + 1;
        table = new node<T> *[ts]; // you should make it prime
        for (int i = 0; i < ts; i++)
        {
            table[i] = NULL;
        }
        // Copy element from old table to new table
        for (int i = 0; i < olsts; i++)
        {
            node<T> *temp = oldTable[i];
            while (temp != NULL)
            {
                string key = temp->key;
                T value = temp->value;
                // Happen in the new table.
                insert(key, value);
                temp = temp->next;
            }

            // Destory the i-th Linked list
            if (oldTable[i] != NULL)
            {
                delete oldTable[i];
            }
        }
    }

public:
    HashTable(int default_size = 7)
    {
        cs = 0;
        ts = default_size;
        table = new node<T> *[ts];
        for (int i = 0; i < ts; i++)
        {
            table[i] = NULL;
        }
    }

    void insert(string key, T val)
    {
        // Next
        int idx = hashFn(key);
        node<T> *n = new node<T>(key, val);
        n->next = table[idx];
        table[idx] = n;
        cs++;
        float load_factor = cs / float(ts);
        if ((load_factor) > 0.7)
        {
            reHash();
        }
    }

    void print()
    {
        // Iterator over Buckets
        for (int i = 0; i < ts; i++)
        {
            cout << "Bucket " << i << " -> ";
            node<T> *temp = table[i];
            while (temp != NULL)
            {
                cout << temp->key << " -> ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    T *search(string key)
    {
        int idx = hashFn(key);
        node<T> *temp = table[idx];
        while (temp != NULL)
        {
            if (temp->key == key)
            {
                return &temp->value;
            }

            temp = temp->next;
        }

        return NULL;
    }

    // HomeWork = Code Exercise
    void erase(string key)
    {
        int idx = hashFn(key);
    }

    // Supercool Functionality!!
    T &operator[](string key)
    {
        // return the value
        // if key is not found then create a new node and return
        // return the existing node
        T *valuefound = search(key);
        if (valuefound == NULL)
        {
            T object;
            insert(key, object);
            valuefound = search(key);
        }

        return *valuefound;
    }
};