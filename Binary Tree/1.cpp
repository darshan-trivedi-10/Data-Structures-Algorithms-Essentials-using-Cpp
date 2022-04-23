// #include <bits/stdc++.h>
// using namespace std;

// class node
// {
// public:
//     int data;
//     node *right, *left;

//     node(int data)
//     {
//         this->data = data;
//         right = left = NULL;
//     }
// };

// /*
// class tree{

// };
// */

// node *BuildTree()
// {
//     int data;
//     cin >> data;

//     if (data == -1)
//     {
//         return NULL;
//     }

//     node *n = new node(data);
//     n->left = BuildTree();
//     n->right = BuildTree();

//     return n;
// }

// #define node Node
// #define data key

// vector<int> ans;
// void inorder(node *root)
// {

//     if (root == NULL)
//     {
//         return;
//     }

//     inorder(root->left);

//     int element = root->data;
//     if (root->left && root->right)
//     {
//         // cout << element << endl;
//         ans.push_back(element);
//     }
//     else if (!(root->left || root->right))
//     {
//         // cout << element << endl;
//         ans.push_back(element);
//     }

//     inorder(root->right);
// }

// vector<int> removeHalfNodes(node *root)
// {
//     inorder(root);
//     return ans;
// }

// int main()
// {
//     node *root = BuildTree();
//     cout << "Hi\n";
//     Level_Order_Print(root);
//     vector<int> a = removeHalfNodes(root);
//     for (auto it : a)
//     {
//         cout << it << " ";
//     }
//     cout << endl;

//     return 0;
// }

// // 1 6 11 2 4

// // 2 7 -1 6 1 -1 -1 11 -1 -1 5 -1 9 -1 4 -1 -1

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    Node *left, *right;
};

#define node Node
#define data key

vector<int> ans;
void inorder(node *root)
{

    if (root == NULL)
    {
        return;
    }

    inorder(root->left);

    int element = root->data;
    if (root->left && root->right)
    {
        // cout << element << endl;
        ans.push_back(element);
    }
    else if (!(root->left || root->right))
    {
        // cout << element << endl;
        ans.push_back(element);
    }

    inorder(root->right);
}

vector<int> removeHalfNodes(node *root)
{
    inorder(root);
    return ans;
}

