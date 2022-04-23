#include <vector>
using namespace std;

template <typename T>
class Stack
{
private:
    vector<T> arr;

public:
    void push(T data)
    {
        arr.push_back(data);
    }

    void pop()
    {
        arr.pop_back();
    }

    T top()
    {
        return arr.back();
        int lastindex = arr.size()-1;
        return arr[lastindex];
    }

    bool empty()
    {
        return arr.size()==0;
    }
};