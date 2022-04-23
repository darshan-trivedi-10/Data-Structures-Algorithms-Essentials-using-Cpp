#include <iostream>
#include <vector>
using namespace std;

// Page No : 53 --: daridydahan shiv strotram

// Input : 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
//

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

void root_to_leaf(node *root, vector<int> &path)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left == NULL and root->right == NULL)
    {
        // print the vector
        for (auto it : path)
        {
            cout << it << " -> ";
        }
        cout<<root->data<<" ";
        cout << endl;
        return;
    }

    // Recursive Case :
    path.push_back(root->data);
    root_to_leaf(root->left, path);
    root_to_leaf(root->right, path);
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
    cout << endl;
    vector<int> ans;
    root_to_leaf(root, ans);
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int k1, k2;
    //     cin >> k1 >> k2;
    //     // printrange(root, k1, k2);
    //     cout << endl;
    //     // cout << search(root, k) << endl;
    // }

    return 0;
}