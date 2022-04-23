class list;
class node
{
private:
    int data;

public:
    node *next;

    // Constructor
    node(int data)
    {
        this->data = data;
        next = NULL;
    }

    // Return data of a node
    int getdata()
    {
        return data;
    }

    friend class list;
};

class list
{
    node *head;
    node *tail;

public:
    list()
    {
        head = NULL;
        tail = NULL;
    }

    // Return head
    node *begin()
    {
        return head;
    }

    void push_front(int data)
    {
        node *n = new node(data);
        if (head == NULL)
        {
            head = tail = n;
        }
        else
        {
            n->next = head;
            head = n;
        }
    }

    void push_back(int data)
    {
        node *n = new node(data);
        if (head == NULL)
        {
            head = tail = n;
        }
        else
        {
            tail->next = n;
            tail = n;
        }
    }

    void insert(int data, int pos)
    {
        if (pos == 0)
        {
            push_front(data);
        }
        else
        {
            node *n = new node(data);
            node *temp = head;
            for (int jump = 0; jump < (pos - 1); jump++)
            {
                temp = temp->next;
            }
            n->next = temp->next;
            temp->next = n;
        }
    }
};