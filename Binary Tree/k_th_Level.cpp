/*

K-th Level
Given a binary tree with N nodes. Your task is to print its Kth level.

Input Format
In the function a pointer to the root node of the binary tree is passed.

Output Format
Return a vector containing nodes at Kth level


Input:       

          60             --- Level 0
         /  \
       50    30          --- Level 1
      /  \   /
    80   10 40           --- Level 2
 
K = 1

Output: 30 50
 
Input:

           50            --- Level 0
          /  \
        60    70         --- Level 1
       /  \   / \
     90   40 40  20      --- Level 2

K = 2

Output : 20 40 90

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

// 1 2 4 -1 -1 5 -1 -1 3 -1 6 7 -1 -1 -1

vector<int> printKthLevel(node *root, int k)
{
    // your code goes here
    queue<node *> q;
    vector<int> ans1;
    int ans = 0;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        if (q.front() == NULL)
        {
            q.pop();
            ans++;
            if (!q.empty())
                q.push(NULL);
        }
        else
        {

            if (ans == k)
            {
                ans1.push_back(q.front()->data);
            }

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

        if (ans > k)
            break;
    }

    return ans1;
}

int sumBT(node *root)
{
    // Code here
    int ans = 0;
    if (root == NULL)
    {
        return 0;
    }
    ans = (root->data) + sumBT(root->left) + sumBT(root->right);
    return ans;
}
int main()
{
    node *root = build_tree();
    Level_Order_Print(root);
    vector<int> ans = printKthLevel(root, 1);
    cout << "Level Print\n";
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << sumBT(root);

    return 0;
}