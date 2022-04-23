#include <bits/stdc++.h>
using namespace std;

class DynamicArray
{
    int *data;
    int nextIndex;
    int capacity; // Total Size

public:
    DynamicArray()
    {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }

    DynamicArray(DynamicArray const &d)
    {

        // this->data = d.data;  // Shallow Copu

        // Deep Copy
        this->data = new int[d.capacity];
        for (int i = 0; i < d.nextIndex; i++)
        {
            this->data[i] = d.data[i];
        }
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
    }

    void operator=(DynamicArray const &d)
    {
        // this->data = d.data;  // Shallow Copu
        // Deep Copy
        this->data = new int[d.capacity];
        for (int i = 0; i < d.nextIndex; i++)
        {
            this->data[i] = d.data[i];
        }
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
    }

    void add(int element)
    {
        if (nextIndex == capacity)
        {
            int *newArray = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newArray[i] = data[i];
            }
            delete[] data;
            data = newArray;
            capacity *= 2;
        }

        data[nextIndex++] = element;
    }

    int get(int i) const
    {
        if (i < nextIndex)
        {
            return data[i];
        }
        else
        {
            return nextIndex;
        }
    }

    int get_size() const
    {
        return nextIndex;
    }

    void add(int i, int element)
    {
        if (i < nextIndex)
        {
            data[i] = element;
        }
        else if (i == nextIndex)
        {
            add(element);
        }
    }

    void print() const
    {
        for (int i = 0; i < nextIndex; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    DynamicArray a;
    a.add(10);
    a.add(20);
    a.add(30);
    a.add(40);
    a.add(50);
    a.add(60);
    a.print();

    DynamicArray a1(a);
    a1.add(0, 100);
    a1.print();
    a.print();

    return 0;
}