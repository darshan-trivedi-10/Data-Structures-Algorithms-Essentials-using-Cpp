#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    list l;

    for (int i = 0; i < 20; i++)
    {
        l.push_back(i + 1);
    }

    cout << "Before Deletion\n";
    node *head = l.begin();
    while (head != NULL)
    {
        cout << head->getdata() << " ";
        head = head->next;
    }
    cout << endl;
    cout << "After Deletion\n";

    l.pop_front();
    l.pop_front();

    l.pop_back();
    l.pop_back();

    l.remove(15);

    head = l.begin();
    while (head != NULL)
    {
        cout << head->getdata() << " ";
        head = head->next;
    }
    cout << endl;

    return 0;
}