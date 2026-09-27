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
        next=prev=NULL;
    }
};
int main ()
{

    Node *head=NULL, *tail=NULL;
    
    int arr[]={1,2,3,4,5};
    for(int i=0; i<5; i++)
    {   
        //linked list doesnt exist
        if(head==NULL)
        {
            head=new Node(arr[i]);
            tail=head;
        }
        //exist karti hai toh
        else
        
        {  //aida tail a insert er code
            Node *temp= new Node(arr[i]);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
    }

   //aida insert at head er code
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
