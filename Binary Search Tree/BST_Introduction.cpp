#include <iostream>
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

node *insert(node *root, int key)
{
    if (root == NULL)
    {
        return (new node(key));
    }

    if (root->data > key)
    {
        root->left = insert(root->left, key);
    }
    else
    {
        root->right = insert(root->right, key);
    }

    return root;
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    // left root right
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Time Complexity : (logn) <= O(Height of the tree) <= N
bool search(node *root, int key)
{
    if (root == NULL)
    {
        return false;
    }

    if (root->data == key)
    {
        return true;
    }
    else if (root->data > key)
    {
        search(root->left, key);
    }
    else
    {
        search(root->right, key);
    }
}

int main()
{
    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    node *root = NULL;
    for (auto x : arr)
    {
        root = insert(root, x);
    }
    inorder(root);
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cout << search(root, k) << endl;
    }

    return 0;
}