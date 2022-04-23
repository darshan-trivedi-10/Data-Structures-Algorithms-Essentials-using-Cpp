/*
Diameter : In a binary tree, diameter is defined as the largest distance between any two nodes of the tree.

Ex.                  1
                    /   \
                  2       3
                / \         \                     ===> Diameter is 5.
              4     5        6
                    /
                  7

Ex.                  1
                         \
                          3
                        /  \
                      4     6                   ==> Diameter is 5. 
                    /         \
                   5           3
                /
               1


Diameter = left.height + right.height
*/
#include <iostream>
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

// Input :    1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
// Output : 5
int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int d1 = height(root->left) + height(root->right);
    int d2 = diameter(root->left);
    int d3 = diameter(root->right);

    return max(d1, max(d2, d3));

    // Time Complexity : O(N^2).
}

// Optimize find diameter function.
int diameter1(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

}

int main()
{
    node *root = build_tree();
    cout << "Diameter is : " << diameter(root) << endl;

    return 0;
}