/*
IsBST?
Problem : Given a Binary Tree, Check if the tree is a BST or not!

Example-I

                                              1
                                           /   \
                                          2      3
                                         /  \     \
                                        4    5    6
false


Example-II

                                            4
                                          /   \
                                        2      5
                                       /  \     \
                                      1    3     6
true
*/

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

vector<int> ans;
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    // left root right
    inorder(root->left);
    // cout << root->data << " ";
    ans.push_back(root->data);
    inorder(root->right);
}

bool is_sorted(vector<int> a)
{
    // int a = a[0];
    int i = 0;
    for (auto it : a)
    {
        if (i >= 1)
        {
            if (a[i] > it)
            {
                return false;
            }
        }

        i++;
    }

    return true;
}

bool isBST(node *root)
{
    //complete this method
    inorder(root);
    return is_sorted(ans);
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

    return 0;
}