#include <iostream>
using namespace std;

// Input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
// Output : 1 2 4 5 7 3 6

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
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }

    node *n = new node(d);
    n->left = build_tree();
    n->right = build_tree();

    return n;
}


void printpreorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    printpreorder(root->left);
    printpreorder(root->right);
}

int main()
{
    node *root = build_tree();
    printpreorder(root);

    return 0;
}