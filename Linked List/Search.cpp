#include <iostream>
#include "list.h"
using namespace std;

bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->getdata() == key)
        {
            return true;
        }

        temp = temp->next;
    }

    return false;
}

bool search_recursive(node *head, int key)
{
    if (head == NULL)
    {
        return false;
    }

    // Recursive case check at head, remaining linked list.
    if (head->getdata() == key)
    {
        return true;
    }
    else
    {
        return search_recursive(head->next, key);
    }
}
int main()
{
    list l;
    l.push_back(0);
    l.push_back(1);
    l.push_back(2);
    l.push_back(4);
    l.push_front(-1);
    l.push_back(5);
    l.push_front(7);
    l.pop_front();

    // 7 -1  0 1 2 4 5

    // Key Which we want to find.
    int key;
    cin >> key;

    node *head = l.begin();
    int idx = l.recursive_search(key);
    if (idx == -1)
    {
        cout << "Key is not present\n";
    }
    else
    {
        cout << "Key is Present at index " << idx << "\n";
    }

    if (search_recursive(head, key))
    {
        cout << "Key is Present\n";
    }
    else
    {
        cout << "Key is not present\n";
    }

    return 0;
}