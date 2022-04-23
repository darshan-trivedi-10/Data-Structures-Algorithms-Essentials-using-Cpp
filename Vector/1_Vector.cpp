#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Demo Vector
    // vector<int> arr = {1, 2, 10, 12, 15};/

    // fiil container
    vector<int> arr(11, 7);

    // Size of an array
    arr.push_back(10); // O(1)
    cout << arr.size() << endl;

    // Capacity of the vector
    cout << arr.capacity() << endl;
    arr.pop_back();
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 2D Vector

    vector<vector<int>> arr1 = {{1, 2, 9, 0, 4}, {3, 4, 9, 0, 4}, {5, 6, 9, 0, 4}, {7, 8, 9, 0, 4}};

    for (auto it : arr1)
    {
        for (auto &&i : it)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}

/*
==> Vectors are sqquence containers representiong arrays that can change in size.

==> Just like arrays, vectors use contiguous storage locations for their elements, which means their elements can also be accessed directly in O(1) time.

==> But unlike arrays, their size can change dynamically, with their storage being handled automatically by the container.

*/