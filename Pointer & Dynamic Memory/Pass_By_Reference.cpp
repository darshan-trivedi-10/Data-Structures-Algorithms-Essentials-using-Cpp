#include <iostream>
using namespace std;

void applytax(int &money)
{
    float tax = 0.10;
    money -= (money * tax);
}

void increment(int &a)
{
    a++;
}

void watchvideo(int *views)
{
    *views = *views + 1;
    // *views++;
    // cout << *views << endl;
}
int main()
{
    int income;
    // cin >> income;
    applytax(income);
    // cout << income << endl;
    int a = 5;
    increment(a);
    // cout << a << endl;

    int view = 100;
    watchvideo(&view);
    cout << view << endl;

    return 0;
}

//