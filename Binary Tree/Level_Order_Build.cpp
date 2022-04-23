/*
PassWord : Bktrivedi@19

Print Level Order (BFS)
--> Print a Binary Tree using a Level Order Traversal.

Input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
Output : 1
              2 3 
              4 5 6 
              7 
*/

#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;
    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

node *build_tree()
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }

    node *n = new node(data);
    n->left = build_tree();
    n->right = build_tree();

    return n;
}

node *Level_Order_Build()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }

    node *root = new node(d);
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *current = q.front();
        q.pop();
        int c1, c2;
        cin >> c1 >> c2;
        if (c1 != -1)
        {
            current->left = new node(c1);
            q.push(current->left);
        }
        if (c2 != -1)
        {
            current->right = new node(c2);
            q.push(current->right);
        }
    }

    return root;
}

// Implement Level Order Build For the tree
void Level_Order_Print(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        // node *temp = q.front();
        if (q.front() == NULL)
        {
            cout << '\n';
            q.pop();
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << q.front()->data << " ";
            if (q.front()->left)
            {
                q.push(q.front()->left);
            }

            if (q.front()->right)
            {
                q.push(q.front()->right);
            }

            q.pop();
        }
    }
}

int main()
{
    node *root = Level_Order_Build();
    Level_Order_Print(root);
    // I  :  1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1
    // O : 1
    //       2 3
    //       4 5 6
    //       7

    return 0;
}