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

Node * CreateLinkedList( int arr[], int index, int size)
{
    //base case
    if(index==size)
    return NULL;

    Node *temp;
    temp= new Node( arr[index]);
    temp->next= CreateLinkedList (arr,index+1,size);
    return temp;
}

int main ()
{
    Node *Head;
    Head= NULL;
   int arr[]={2,4,6,8,10};

   Head = CreateLinkedList(arr,0,5);

  if(Head!=NULL)
  {
    if( Head->next==NULL)
    {
        Node *temp;
        temp=Head;
        delete temp;
        Head=NULL;
    }

    else
   {
    Node *curr=Head;
    Node*prev=NULL;

    while(curr->next!=NULL)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    delete curr;
   }
  }

    while(Head)
    {
        cout<<Head->data<<" ";
         Head=Head->next;
    }

    return 0;
}