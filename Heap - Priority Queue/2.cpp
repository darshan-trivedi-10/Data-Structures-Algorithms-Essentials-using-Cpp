#include <iostream>
#include <queue>
using namespace std;

class Compare
{
public:
    bool operator()(int a, int b)
    {
        // return a > b;
        return a < b;
    }
};

int main()
{
    int arr[] = {10, 15, 20, 13, 6, 90};
    int n = sizeof(arr) / sizeof(int);
    // Max Heap.
    // priority_queue<int> heap;
    // Min Heap
    // priority_queue<int, vector<int>, Compare> heap;
    priority_queue<int, vector<int>, greater<int>> heap;
    for (int i = 0; i < n; i++)
    {
        heap.push(arr[i]);
    }
    while (!heap.empty())
    {
        cout << heap.top() << " ";
        heap.pop();
    }

    return 0;
}
