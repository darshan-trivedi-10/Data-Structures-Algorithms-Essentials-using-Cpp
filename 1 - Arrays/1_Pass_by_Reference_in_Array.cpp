#include <iostream>
using namespace std;

void printarray(int *a)
{
    int n = (sizeof(a) / sizeof(int));
    cout << "Print array in Function printarray\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }
    cout << endl;
}

void printarray_with_size(int *a, int n)
{
    cout << "Print array in Function printarray with size\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    printarray(a);
    printarray_with_size(a, n);
    cout << "Print array in Main Function\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ", ";
    }
    cout << endl;

    return 0;
}
