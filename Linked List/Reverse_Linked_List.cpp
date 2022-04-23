#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    list l;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        l.push_back(i+1);
    }

    cout << "Before Reverse Operastion\n";
    node *head = l.begin();
    while (head != NULL)
    {
        cout << head->getdata() << " ";
        head = head->next;
    }
    cout << endl;
    cout << "After Reverse Operastion\n";

    head = l.begin();
    l.reverse(head);
    while (head != NULL)
    {
        cout << head->getdata() << " ";
        head = head->next;
    }
    cout << endl;

    return 0;
}
