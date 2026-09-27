#include<bits/stdc++.h>
using namespace std;
class  Node
{
    public:
    int data;
    Node*  next;

    Node( int value)
    {
        data=value;
        next=NULL;
    }
};

class Queue
{
    Node *front;
    Node *rear;
    public:

    Queue()
    {
        front=rear=NULL;
    }

    bool IsEmpty()
    {
        return front==NULL;
    }

    void push(int x)
    {
        if(IsEmpty())
        {
            cout<<"Pushed "<<x<<" into the queue\n";
            front=rear= new Node(x);
            return;
        }
        else
        {
            rear->next= new Node(x);
            if(rear->next==NULL)
            {
                cout<<"Queue Overflow\n";
                return;
            }
            cout<<"Pushed "<<x<<" into the queue\n";
            rear=rear->next;

        }
    }

    void pop()
    {
        if(IsEmpty())
        {
            cout<<"Queue Underflow\n";
            return;
        }
        else
        {
            cout<<"Popped "<<front->data<<" from the queue\n";
            Node * temp=front;
            front=front->next;
            delete temp;
        }
    }

    int start()
    {
        if(IsEmpty())
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        else
        return front->data;
    }

};

int main ()
{
 
    Queue q;
    q.push(5);
    q.push(51);
    q.push(115);
    q.push(58);
    q.pop();
    cout<<q.start()<<endl;
   
    return 0;
}