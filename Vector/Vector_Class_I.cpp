#include <iostream>
#include "Vector.h"
using namespace std;

// push_back
// pop_back
// size
// get
// [i]
// front
// back

// template <typename t>

int main()
{
    Vector<int> v(5);
    Vector<bool> vb(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << v.at(2) << endl;
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}