//  https://www.geeksforgeeks.org/expression-tree/
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    char data;
    node *left, *right;
    node(char data)
    {
        this->data = data;
        left = right = NULL;
    }
};

node *build_tree()
{
    char data;
    cin >> data;
    if (data == '.')
    {
        return NULL;
    }

    node *n = new node(data);
    n->left = build_tree();
    n->right = build_tree();

    return n;
}

void preorder_print(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder_print(root->left);
    preorder_print(root->right);
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
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

//

int evalTree(node *root)
{
}

// + 3 . . * + 5 . . 9 . . 2 . .

int main()
{
    node *root = build_tree();
    Level_Order_Print(root);
    cout << "Preorder : ";
    preorder_print(root);
    cout << endl;
    cout << "Inorder : ";
    inorder(root);
    cout << endl;
    cout << "Postorder : ";
    postorder(root);
    cout << endl;
    cout << "(((5 + 9) * 2 ) + 3)\n";

    return 0;
}