#include <iostream>
#include <queue>

using namespace std;

// Built Tree :
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

    node *root = new node(data);
    root->left = build_tree();
    root->right = build_tree();
    return root;
}

// Input : 1 2 4 -1 -1 5 -1 -1 3 -1 -1
/*

Depth First Traversals: 
(a) Preorder (Root, Left, Right) : 1 2 4 5 3 
(b) Inorder (Left, Root, Right) : 4 2 5 1 3 
(c) Postorder (Left, Right, Root) : 4 5 2 3 1

*/
void preorder_print(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder_print(root->left);
    preorder_print(root->right);
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void print_level_order(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        if (q.front() == NULL)
        {
            cout << endl;
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

node *build_level_order()
{
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }

    node *root = new node(data);
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

int main()
{
    // 1 3 4 -1 -1 5 3 -1 -1 2 -1 -1 6 -1 8 -1 -1
    node *root = build_tree();
    cout << "Preorder Print : ";
    preorder_print(root);
    cout << endl;
    cout << "Inorder Print : ";
    inorder(root);
    cout << endl;
    cout << "Postorder Print : ";
    postorder(root);
    cout << endl;

    //  1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1
    node *tree = build_level_order();
    print_level_order(root);

    return 0;
}
