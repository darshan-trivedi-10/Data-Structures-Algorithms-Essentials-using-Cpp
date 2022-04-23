/*
push  --> o(1)
pop    --> o(1)
Front --> o(1)
*/
using namespace std;
class Queue
{
private:
    int *arr;
    int cs, ms;
    int front = 0;
    int rear;

public:
    Queue(int default_size = 5)
    {
        ms = default_size;
        cs = 0;
        arr = new int[ms];
        front = 0;
        rear = ms - 1;
    }

    bool full()
    {
        return cs == ms;
    }

    bool empty()
    {
        return cs == 0;
    }

    void push(int data)
    {
        if (!full())
        {
            rear = ((rear + 1) % ms);
            arr[rear] = data;
            cs++;
        }
        else
        {
            cout << "Queue is Full\n";
        }
    }

    void pop()
    {
        if (!empty())
        {
            // Take the front pointer forward
            front = ((front + 1) % ms);
            cs--;
        }
    }

    int Get_front()
    {
        return arr[front];
    }

    int size()
    {
        return cs;
    }
};