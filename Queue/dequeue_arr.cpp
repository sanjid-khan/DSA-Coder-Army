#include<bits/stdc++.h>
using namespace std;
class Dequeue
{
  int front, rear,size;
  int *arr;

  public:
  Dequeue(int n)
  {
    size=n;
    arr=new int[n];
    front=rear=-1;
  }
  
  bool IsEmpty()
  {
    return front==-1;
  }

  bool IsFull()
  {
    return (rear+1)%size==front;
  }

  void push_front(int x)
  {
    //empty
    if(IsEmpty())
    {
        front=rear=0;
        cout<<"Pushed "<<x<<" in front\n";
        arr[0]=x;
        return;
    }
    //full
    else if(IsFull())
    {
      cout<<"Dequeue Overflow\n";
      return;
    }
    //normal
    else
    {
        front=(front-1+size)%size;
        arr[front]=x;
        cout<<"Pushed "<<x<<" in front\n";
        return;
    }
  }

  void push_back(int x)
  {
    //empty
    if(IsEmpty())
    {
        front=rear=0;
        cout<<"Pushed "<<x<<" in back\n";
        arr[0]=x;
        return;
    }
    //full
    else if(IsFull())
    {
      cout<<"Dequeue Overflow\n";
      return;
    }
    //normal
    else
    {
        rear=(rear+1)%size;
        arr[rear]=x;
        cout<<"Pushed "<<x<<" in back\n";
        return;
    }
  }

  void pop_front()
  {
    //empty
    if(IsEmpty())
    {
        cout<<"Dequeue Underflow\n";
        return;
    }
    else
    {
        //single element
        if(front==rear)
        front=rear=-1;
        //greater than 1 element
        else
        front=(front+1)%size;
    }
  }

  void pop_back()
  {
    //empty
    if(IsEmpty())
    {
        cout<<"Dequeue Underflow\n";
        return;
    }
    else
    {
        cout<<"Popped "<<arr[rear]<<" from dequeue\n";
        //single element
        if(front==rear)
        front=rear=-1;
        //greater than 1 element
        else
        rear=(rear-1+size)%size;
    }
  }

  int start()
  {
    if(IsEmpty())
    return -1;
    else
    return arr[front];
  }

  int end()
  {
    if(IsEmpty())
    return -1;
    else
    return arr[rear];
  }


};

int main ()
{
 
    Dequeue d(5);
    d.push_back(10);
    d.push_back(91);
    d.push_front(9);
    d.push_front(18);
    d.pop_back();
    d.pop_front();
    cout<<d.start()<<endl;
    return 0;
}