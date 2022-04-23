#include <iostream>
#include <climits>
using namespace std;

void bubble_sort(int a[], int n)
{
    if (n == 1)
    {
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            swap(a[i], a[i + 1]);
        }
    }

    bubble_sort(a, n - 1);
}

void bubble_sort1(int a[], int n, int j)
{
    if (n == 1)
    {
        return;
    }

    if (j == n - 1)
    {
        bubble_sort1(a, n - 1, 0);
        return;
    }

    if (a[j] > a[j + 1])
    {
        swap(a[j], a[j + 1]);
    }

    bubble_sort1(a, n, ++j);
}

int main()
{

    return 0;
}