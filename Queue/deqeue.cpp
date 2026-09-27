#include<bits/stdc++.h>
using namespace std;
class  Node
{
    public:
    int data;
    Node *next ;
    Node *prev;
    
    Node( int value)
    {
        data= value ;
        next=prev=NULL;
    }
    
};

class Dequeue
{
    Node *front, *rear;
    public:
    Dequeue()
    {
        front=rear=NULL;
    }
    //push front
    void push_front( int x)
    {
        //empty
        if(front==NULL)
        {
            front=rear=new Node(x);
            cout<<"Pushed "<<x<<" in front of dequeue\n";
            return;
        }
        else
        {
            Node *temp= new Node(x);
            temp->next=front;
            front->prev=temp;
            front=temp;
            cout<<"Pushed "<<x<<" in front of dequeue\n";
            return;
        }
    }
    //push back
    void push_back( int x)
    {
        //empty
        if(front==NULL)
        {
            front=rear=new Node(x);
            cout<<"Pushed "<<x<<" in back of dequeue\n";
            return;
        }
        else
        {
            Node *temp= new Node(x);
            rear->next=temp;
            temp->prev=rear;
            rear=temp;
            cout<<"Pushed "<<x<<" in back of dequeue\n";
            return;
        }
    }
    //pop front
    void pop_front()
    {
        //empty
        if(front==NULL)
        {
           cout<<"Dequeue Underflow\n";
           return; 
        }
        else
        {
            Node *temp=front;
            cout<<"Popped "<<temp->data<<" from front\n";
            front=front->next;
            delete temp;
            //greater than 1 node
            if(front)
            front->prev=NULL;
            //1 node
            else
            rear=NULL;
        }
    }
    //pop back
    void pop_back()
    {
        //empty
        if(front==NULL)
        {
           cout<<"Dequeue Underflow\n";
           return; 
        }
        else
        {
            Node *temp=rear;
            cout<<"Popped "<<temp->data<<" from back\n";
            rear=rear->prev;
            delete temp;
            //greater than 1 node
            if(rear)
            rear->prev=NULL;
            //1 node
            else
            front=NULL;
        }
    }
    //start
    int start()
    {
        if(front==NULL)
        return -1;
        else
        return front->data;
    }
    //end
    int end()
    {
        if(front==NULL)
        return -1;
        else
        return rear->data;
    }
};

int main ()
{
    Dequeue d;
    d.push_back(5);
    d.push_front(8);
    cout<<d.start()<<endl;
   
    return 0;
}