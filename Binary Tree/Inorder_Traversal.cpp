#include <iostream>
using namespace std;

// Input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
// Output : 4 2 7 5 1 3 6

// Left Root Right in inorder.
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

void Inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

int main()
{
    node *root = build_tree();
    Inorder(root);

    return 0;
}