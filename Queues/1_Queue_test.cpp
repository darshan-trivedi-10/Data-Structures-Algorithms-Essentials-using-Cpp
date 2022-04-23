#include <iostream>
#include "queue_array.h"
using namespace std;

int main()
{
    Queue q(10);
    for (int i = 0; i < 10; i++)
    {
        q.push(i + 1);
    }

    while (!q.empty())
    {
        cout << q.Get_front() << " " ;
        q.pop();
    }
    
    return 0;
}