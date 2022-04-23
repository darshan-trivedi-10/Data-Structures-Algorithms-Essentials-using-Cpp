/*

Symmetric Tree
Problem : Given a binary tree with N nodes. Your task is to check whether it is a mirror of itself (i.e., symmetric around its center).

Input Format
In the function a pointer to the root node of the binary tree is passed.

Output Format
Return true if symmetric otherwise return false.



Sample Input
     
                       1
                   /     \
                 2         2
               /  \      /  \
             3      4  4      3

Sample Output
True

*/

#include <bits/stdc++.h>
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

// Implement Level Order Build For the tree
void Level_Order_Print(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        // node *temp = q.front();
        if (q.front() == NULL)
        {
            cout << '\n';
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

bool helper(node *a, node *b)
{
    if (a == NULL && b == NULL)
    {
        return true;
    }
    else if (a == NULL || b == NULL)
    {
        return false;
    }

    if (a->data != b->data)
    {
        return false;
    }

    return helper(a->left, b->right) && helper(a->right, b->left);
}

bool isSymmetric(node *root)
{
    //your code goes here
    if (root == NULL)
    {
        return 1;
    }
    return helper(root->left, root->right);
}

int main()
{

    return 0;
}