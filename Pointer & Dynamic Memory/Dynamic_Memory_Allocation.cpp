// https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation/

// https://www.parasoft.com/blog/finding-memory-leaks-in-c-or-c/#:~:text=In%20computer%20science%2C%20a%20memory,accessed%20by%20the%20running%20code.

#include <iostream>
using namespace std;

int main()
{
    // Dynamic Memory Allocation
    int a[100]; // constant size array.

    int n;
    cin >> n;
    int *arr = new int[n]; // Store in a Heap Memory
    int *x = new int;
    *x = 10;
    arr[2] = 20;
    cout << arr[2] << " " << x << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cout << arr[i] << " ";
    }

    // arr[i]= value;

    delete[] arr;
    delete x;
    cout  <<endl<<arr[4] << endl;

    // In other words, leaks mean that dynamically-allocated memory cannot be released back to the operating system because the program no longer contains pointers that can access it. You’ve lost control of that piece of memory regardless of size and can no longer access it or free it.

    return 0;
}
