// Forward Declarastion
using namespace std;
class list;
class node
{
private:
    int data;

public:
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }

    int getdata()
    {
        return data;
    }

    friend class list;

    ~node()
    {
        if (next != NULL)
        {
            delete next;
        }
        // cout << "Deleting node with data " << data << endl;
    }
};

class list
{
    node *head;
    node *tail;

    int searchHelper(node *start, int key)
    {
        // Base Case :
        if (start == NULL)
        {
            return -1;
        }
        if (start->data == key)
        {
            return 0;
        }
        // Remaining part of the Linked list
        int subIndex = searchHelper(start->next, key);
        if (subIndex == -1)
        {
            return -1;
        }
        else
        {
            return subIndex + 1;
        }
    }

public:
    list()
    {
        head = NULL;
        tail = NULL;
    }

    node *begin()
    {
        return head;
    }

    void push_front(int data)
    {
        if (head == NULL)
        {
            node *n = new node(data);
            head = n, tail = n;
        }
        else
        {
            node *n = new node(data);
            n->next = head;
            head = n;
        }
    }

    void push_back(int data)
    {
        if (head == NULL)
        {
            node *n = new node(data);
            head = tail = n;
        }
        else
        {
            node *n = new node(data);
            tail->next = n;
            tail = n;
        }
    }

    void insert(int data, int pos)
    {
        if (pos == 0)
        {
            push_front(data);
            return;
        }

        //Otherwise
        node *temp = head;
        for (int jump = 0; jump < (pos - 1); jump++)
        {
            temp = temp->next;
        }

        node *n = new node(data);
        n->next = temp->next;
        temp->next = n;
    }

    void pop_front()
    {
        if (head != NULL)
        {
            node *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    // Homework : pop_back, remove(pos)
    void pop_back()
    {
        node *temp = head;
        if (head == NULL)
        {
            delete head;
        }
        if (temp->next == NULL)
        {
            // pop_front();
            delete head;
        }
        while ((temp->next)->next != NULL)
        {
            temp = temp->next;
        }

        node *n = temp->next;
        temp->next = NULL;
        delete n;
    }

    // Tommorow
    void remove(int position)
    {
        if (position == 0)
        {
            pop_front();
        }

        node *temp = head;

        for (int jump = 0; jump < (position - 1); jump++)
        {
            temp = temp->next;
        }

        node *n = (temp->next);
        temp->next = n->next;
        n->next = NULL;
        delete n;
    }

    void *reverse(node *&head)
    {
        node *curr = head;
        node *prev = NULL;
        node *n;
        while (curr != NULL)
        {
            // Save the next node
            n = curr->next;
            // Make current node point to previous
            curr->next = prev;
            // Update previous and current take them 1 step forward
            prev = curr;
            curr = n;
        }

        head = prev;
    }
    int search(int key)
    {
        node *temp = head;
        int index = 0;
        while (temp != NULL)
        {
            if (temp->getdata() == key)
            {
                return index;
            }

            temp = temp->next;
            index++;
        }

        return -1;
    }

    int recursive_search(int key)
    {
        int idx = searchHelper(head, key);
        return idx;
    }
    ~list()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }
};
