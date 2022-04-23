template <typename T>
class Stack;

template <typename T>
class node
{
public:
    T data;
    node<T> *next;
    node(T d)
    {
        data = d;
    }
};

template <typename T>
class Stack
{
private:
    node<T> *head;

public:
    Stack()
    {
        head = NULL;
    }

    void push(T data)
    {
        node<T> *n = new node<T>(data);
        n->next = head;
        head = n;
    }

    T top()
    {
        if (head != NULL)
            return (head->data);
    }

    void pop()
    {
        if (head != NULL)
        {
            node<T> *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    bool empty()
    {
        return head == NULL;
    }
};