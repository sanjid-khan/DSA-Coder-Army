#include<bits/stdc++.h>
using namespace std;

class Queue
{
  int *arr;
  int front, rear,size;

  public:
  Queue( int n)
  {
    arr= new int [n];
    size=n;
    front=rear=-1;
  }

  //if queue is empty or not
  bool Isempty()
  {
    return front==-1;
  }
  //queue is full or not
  bool Isfull()
  {
    return (rear+1)%size==front;
  }
  //push into queue
  void push( int x)
  {
    if(Isempty())
    {
        cout<<"Pushed "<<x<<" into the queue\n";
        front=rear=0;
        arr[0]=x;
        return;
    }
  else  if(Isfull())
    {
        cout<<"Queue Overflow\n";
        return;
    }
    else
    {
        rear=(rear+1)%size;
        arr[rear]=x;
        cout<<"Pushed "<<x<<" into the queue\n";
    }
  }

  void pop()
  {
    if(Isempty())
    {
        cout<<"Queue Underflow\n";
        return;
    }
    else 
    {
        if(front==rear)
        { 
        cout<<"Popped "<<arr[front]<<" into the queue\n";    
        front=rear=-1;
        }
        else
        {
            cout<<"Popped "<<arr[front]<<" into the queue\n";
            front=(front+1)%size;
        }
    }
  }

  int start ()
  {
    if(Isempty())
    {
        cout<<"Queue is empty\n";
        return -1;
    }
    else
    return arr[front];
  }

};

int main ()
{
    Queue q(5);
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(51);
    q.push(125);
    q.pop();
    q.pop();
    q.push(511);
    q.push(38);
    q.pop();
    return 0;
}