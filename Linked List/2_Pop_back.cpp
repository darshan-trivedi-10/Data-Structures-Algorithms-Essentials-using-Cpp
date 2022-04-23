#include <iostream>
#include "list.h"
// #include "list1.h"
using namespace std;

int main()
{
    list l;
    l.push_back(0);
    l.push_back(1);
    l.push_back(2);
    l.push_back(4);
    l.push_front(-1);
    l.insert(3, 4);
    l.insert(-2,0);

    node *head = l.begin();

    while (head != NULL)
    {
        cout << head->getdata();
        head = head->next;
        if (head != NULL)
        {
            cout << " -> ";
        }
        else
        {
            cout << ".\n";
        }
    }

    return 0;
}