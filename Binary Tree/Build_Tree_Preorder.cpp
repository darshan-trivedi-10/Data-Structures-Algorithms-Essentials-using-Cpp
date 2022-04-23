#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *right, *left;

    node(int data)
    {
        this->data = data;
        right = left = NULL;
    }
};

/*
class tree{

};
*/

node *BuildTree()
{
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    node *n = new node(data);
    n->left = BuildTree();
    n->right = BuildTree();

    return n;
}

int main()
{

    return 0;
}