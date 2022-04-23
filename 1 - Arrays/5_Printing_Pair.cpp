//  Print all the pair of the element.
#include <iostream>
using namespace std;

void printing_pair(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << "( " << a[i] << ", " << a[j] << " )"
                 << ",";
        }
        cout << '\n';
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }

    printing_pair(a, n);

    return 0;
}