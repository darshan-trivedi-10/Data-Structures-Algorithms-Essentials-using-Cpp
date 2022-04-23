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

void printrange(node *root, int k1, int k2)
{
    if (root == NULL)
    {
        return;
    }

    if (root->data >= k1 && root->data <= k2)
    {
        // Call on Both sides
        printrange(root->left, k1, k2);
        cout << root->data << " ";
        printrange(root->right, k1, k2);
    }
    else if (root->data > k2)
    {
        printrange(root->left, k1, k2);
    }
    else
    {
        //root->data <k1
        printrange(root->right, k1, k2);
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
        int k1, k2;
        cin >> k1 >> k2;
        printrange(root, k1, k2);
        cout << endl;
        // cout << search(root, k) << endl;
    }

    return 0;
}