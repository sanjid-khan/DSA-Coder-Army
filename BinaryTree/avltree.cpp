#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data, height;
    Node* left, *right;

    Node(int value)
    {
        data=value;
        height=1;
        left=right=NULL;
    }
};

int getheight(Node* root)
{
    if(root==NULL)
    return 0;

    return root->height;
}

int getbalance(Node* root)
{
    return getheight(root->left)-getheight(root->right);
}

Node* rightrotation(Node* root)
{

    Node* child=root->left;
    Node* childright=child->right;

    child->right=root;
    root->left=childright;

    //update the height
    root->height=1+max(getheight(root->left),getheight(root->right));
    child->height=1+max(getheight(child->left),getheight(child->right));

    return child;

}

Node* leftrotation(Node* root)
{
    Node* child=root->right;
    Node* childleft=child->left;

    child->left=root;
    root->right=childleft;

    //update the height
    root->height=1+max(getheight(root->left),getheight(root->right));
    child->height=1+max(getheight(child->left),getheight(child->right));

    return child;

}

Node* insert(Node* root, int key)
{
    //doesnt exist
    if(root==NULL)
    return new Node(key);

    //exist hai
    if(key<root->data)
    root->left=insert(root->left,key);
    else if(key>root->data)
    root->right=insert(root->right,key);
    else
    return  root; //duplicate elements are not allowed

    //update height
    root->height=1+max(getheight(root->left),getheight(root->right));

    //balancing check
    int balance =getbalance(root);

    //left left case
    if(balance>1 && key<root->left->data)
      return rightrotation(root); 

    //right right case
    else if (balance<-1 && root->right->data<key)
     return leftrotation(root);

    //left right case
    else if (balance>1 && key>root->left->data)
    {
      root->left=  leftrotation(root->left); //middle root->left
       return  rightrotation(root); // top
    }

    //right left case
    else if (balance<-1 && root->right->data>key)
    {
       root->right= rightrotation(root->right); //middle root->right
       return leftrotation(root); // top
    }

    //no unbalacing
    else
    {
        return root;
    }
}

void preorder(Node* root)
{
    if(root==NULL)
    return;
    
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node * root)
{
    if(root==NULL)
    return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main ()
{
    //duplicate elements not allowed
    Node* root= NULL;
     
    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,30);
    root=insert(root,50);
    root=insert(root,70);
    root=insert(root,5);
    root=insert(root,100);
    root=insert(root,95);

    cout<<" preorder : "<<endl;
    preorder(root);

    cout<<" inorder : "<<endl;
    inorder(root);
   
    return 0;
}
