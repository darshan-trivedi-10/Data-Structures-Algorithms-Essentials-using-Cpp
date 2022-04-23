#include <iostream>
#include <vector> // find, search for seqvence function is search
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr(100);
    for (int i = 0; i < 100; i++)
    {
        arr[i] = (i + 1);
    }

    int key;
    cin >> key;
    vector<int>::iterator it = find(arr.begin(), arr.end(), key);

    if (it != arr.end())
    {
        cout << "Present at " << it - arr.begin() << endl;
    }
    else
    {
        cout << "Not Found\n";
    }

    return 0;
}