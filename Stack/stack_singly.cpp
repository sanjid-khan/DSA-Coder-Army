#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node( int value)
    {
        data=value;
        next=NULL;
    }
};

class Stack
{
  Node *top;
  int size;

  public:

  Stack()
  {
    top=NULL;
    size=0;
  }

 // push
 void push( int value)
 {
    Node *temp= new Node(value);
    if(temp==NULL)
    {
        cout<<"stack overflow\n";
        return;
    }
    else
    {
        temp->next=top;
        top=temp;
        size++;
        cout<<"pushed "<<value<<" into the stack\n";
    }
 }

 //pop
 void pop()
 {
    if(top==NULL)
    {
        cout<<"stack underflow\n";
        return;
    }
    else
    {
        Node *temp=top;
        cout<<"popped "<<top->data<<" from the stack\n";
        top=top->next;
        delete temp;
        size--;
    }
 }

 //peek
 int peek()
 {
    if(top==NULL)
    {
        cout<<"stack is empty\n";
        return -1;
    }
    else
    {
        return top->data;
    }
 }

 //isempty
 bool isempty()
 {
    return top==NULL;
 }

 //issize
 int IsSize()
 {
    return size;
 }

};

int main ()
{
 
    Stack S;
    S.push(6);
    S.push(16);
    S.push(62);
    S.push(86);
    S.pop();

   
    return 0;
}