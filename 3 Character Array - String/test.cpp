#include <bits/stdc++.h>

using namespace std;

void plus12()
{
    static int x = 0;
    cout << x << endl;
    x++;
}

int main()
{
    plus12();
    plus12();
    plus12();

    return 0;
}