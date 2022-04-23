// Helper Function : Height of the tree
#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *right, *left;

    node(int data)
    {
        this->data = data;
        right = left = NULL;
    }
};

/*
class tree{

};
*/

node *BuildTree()
{
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    node *n = new node(data);
    n->left = BuildTree();
    n->right = BuildTree();

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

// Helper Function :
int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int h1 = height(root->left);
    int h2 = height(root->right);

    return 1 + max(h1, h2);
}

// I : 1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1
// O : 6

int main()
{
    node *root = BuildTree();
    // Level_Order_Print(root);
    cout << height(root) << endl; // print --> 6

    return 0;
}