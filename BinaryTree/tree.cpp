#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *left, *right;

    Node (int value)
    {
        left=right=NULL;
        data=value;
    }
};

void PreOrder (Node *root)
{
    if(root==NULL)
    return;
    
    //Node
    cout<<root->data<<" ";
    //left
    PreOrder(root->left);
    //right
    PreOrder(root->right);
}

void InOrder( Node *root)
{
    if(root==NULL)
    return;

    //Left
    InOrder(root->left);
    //Node
    cout<<root->data<<" ";
    //right
    InOrder(root->right);
}

void PostOrder( Node* root)
{
    if(root==NULL)
    return;

    //left
    PostOrder(root->left);
    //right
    PostOrder(root->right);
    //node
    cout<<root->data<<" ";
}

Node * BinaryTree()
{
    int x;
    cin>>x;
    if(x==-1)
    return NULL;

    Node *temp= new Node(x);
    //left side create
    cout<<"Enter the left child of "<<x<<" : ";
    temp->left=BinaryTree();
    //right side create
    cout<<"Enter the right child of "<<x<<" : ";
    temp->right=BinaryTree();
    return temp;
}

int main ()
{
    cout<<"Enter the root node: ";
    Node *root;
    root= BinaryTree();
    //Tree creation code

    //PreOrder Print;
    cout<<"Pre Order: ";
    PreOrder(root);

    //InOrder Print;
    cout<<"\nInorder: ";
    InOrder(root);

    //PostOrder
    cout<<"/nPostOrder: ";
    PostOrder(root);
    return 0;
}