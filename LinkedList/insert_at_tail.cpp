#include<bits/stdc++.h>
using namespace std;
class  Node
{
    public:
    int data;
    Node* next;
    Node( int value)
    {
        data=value;
        this->next=NULL;
    }
};
int main ()
{
    Node *Head, *Tail;
    Head= NULL;
    Tail=NULL;

   int arr[]={2,4,6,8,10};
    //Insert the node at beginning

    //Linked list doesn't exit
    for( int i=0; i<5; i++)
    { 
    if(Head==NULL)
    {
        Head= new Node(arr[i]);
        Tail=Head;
    }
    //Linked list exit karti
    else
    {
        Tail->next= new Node (arr[i]);
        Tail=Tail->next;
    }
    }
    
    //print the value
    Node *temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}
