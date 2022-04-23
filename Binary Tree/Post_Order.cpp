#include <iostream>
using namespace std;

// Input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
// Output : 4 7 5 2 6 3 1 
// Left Right and after Root in Post_Order.
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

void Post_Order(node *root)
{
    if (root == NULL)
    {
        return;
    }
    Post_Order(root->left);
    Post_Order(root->right);
    cout << root->data << " ";
}

int main()
{
    node *root = build_tree();
    Post_Order(root);

    return 0;
}