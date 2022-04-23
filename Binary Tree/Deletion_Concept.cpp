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

node *FindMin(node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

node *remove(node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->data > key)
    {
        root->left = remove(root->left, key);
    }
    else if (root->data < key)
    {
        root->right = remove(root->right, key);
    }
    else
    {
        // When Current Node is Matches with the key
        // No Children
        if (root->left == NULL and root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        // Single Children
        else if (root->left == NULL)
        {
            node *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root;
            root = root->left;
            delete temp;
        }
        // with 2 Subtree
        else
        {
            node *temp = FindMin(root->right);
            root->data = temp->data;
            root->right = remove(root->right, temp->data);
        }
    }

    return NULL;
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
        // cout << search(root, k) << endl;
    }

    return 0;
}