#include<bits/stdc++.h>
using namespace std;
class  Node
{
    public:
    int data;
    Node* next;
    Node* prev;
    Node( int value)
    {
        data=value;
        next=prev-NULL;
    }
};
int main ()
{

    Node *head=NULL;
    //insert at head

    //linkedlist doesnt exist
    if(head==NULL)
    {
        head= new Node(5);
    }
    //already exist
    else
    {
        Node *temp=new Node(5);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
   
    Node *trav= head;
    while(trav)
    {
        cout<<trav->data<<" ";
        trav=trav->next;
    }

    return 0;
}

//aida optimize approach na optimize er jonno tail crack rakhte hobe