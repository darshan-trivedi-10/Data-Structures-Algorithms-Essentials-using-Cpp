#include <iostream>
#include "stackV.h"
using namespace std;

int main()
{
    Stack<int> s;
    for (int i = 0; i < 20; i++)
    {
        s.push(20-i );
    }


    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;

    return 0;
}
