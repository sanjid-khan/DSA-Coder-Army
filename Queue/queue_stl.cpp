#include<bits/stdc++.h>
using namespace std;
int main ()
{
    queue<int>q;
    q.push(10);
    q.push(40);
    q.push(123);
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
   
    return 0;
}