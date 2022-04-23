#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    list l;
    l.push_front(1);
    l.push_front(0);
    l.push_front(2);

    node *head = l.begin();

    while (head != NULL)
    {
        cout << head->getdata();
        head = head->next;
        if (head != NULL)
        {
            cout << " -> ";
        }
    }
    // node n(10);
    // cout<<endl<<n.getdata();

    return 0;
}