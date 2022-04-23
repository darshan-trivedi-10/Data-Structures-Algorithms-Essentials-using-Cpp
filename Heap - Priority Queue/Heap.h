#include <vector>
using namespace std;

class Heap
{
private:
    vector<int> arr;
    void heapify(int i)
    {
        int left = 2 * i;
        int right = 2 * i + 1;
        int min_idx = i;
        if (left < arr.size() and arr[left] < arr[i])
        {
            min_idx = left;
        }
        if (right < arr.size() and arr[right] < arr[i])
        {
            min_idx = right;
        }

        if (min_idx != i)
        {
            swap(arr[i], arr[min_idx]);
            heapify(min_idx);
        }
    }

public:
    Heap(int default_size = 10)
    {
        arr.reserve(10 + 1);
        arr.push_back(-1);
    }

    void push(int data)
    {
        arr.push_back(data);
        int idx = arr.size() - 1;
        int parent = (idx / 2);
        while (idx > 1 and arr[idx] > arr[parent])
        {
            swap(arr[idx], arr[parent]);
            idx = parent;
            parent /= 2;
        }
    }

    void pop()
    {
        // Swap With 1 and last
        int idx = arr.size() - 1;
        swap(arr[1], arr[idx]);
        arr.pop_back();
        // Heapify is the process of converting a binary tree into a Heap data structure. A binary tree being a tree data structure where each node has at most two child nodes.
        heapify(1);
    }

    int size()
    {
        return arr.size();
    }
    bool isempty()
    {
        return arr.size() == 1;
    }
    int get_min()
    {
        return arr[1];
    }

    int get_top()
    {
        return arr[1];
    }
};