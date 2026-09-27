#include<bits/stdc++.h>
using namespace std;
class Stack
{
  int *arr;
  int size;
  int top;

  public:
  bool flag;
  Stack(int s)
  {
    size=s;
    top=-1;
    arr= new int[s];
    flag=1; //first a stack khali
  }
  //push
  void push( int value)
  {
    if(top==size-1)
    {
        cout<<" stack overflow\n";
        return;
    }
    else
    {
       top++;
       arr[top]=value;
       cout<<"pushed "<<value<<" into the stack\n";
       flag=0; //stack khali na bujate
    }
  }

  //pop
  void pop()
  {
    if(top==-1)
    {
        cout<<"stack underflow\n";
    }
    else
    {
        cout<<"popped "<<arr[top]<<" from the stack\n";
        top--;
        if(top==-1)
        flag=1; // mane stack khali
    }
  }

  //peek
  int peek()
  {
    if(top==-1)
    {
        cout<<"stack is empty\n";
        return -1;
    }
    else
    {
        return arr[top];
    }
  }

  //isempty
  bool isempty()
  {
    return top==-1;
  }

  //issize
  int issize()
  {
    return top+1;
  }

};
int main ()
{
 
    Stack S(5);
    S.push(5);
    S.push(6);
    S.push(8);
   cout<<S.peek()<<endl;
   S.pop();
   cout<<S.peek()<<endl;
   
    return 0;
}