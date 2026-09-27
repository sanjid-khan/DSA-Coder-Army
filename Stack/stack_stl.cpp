#include<bits/stdc++.h>
using namespace std;
int main ()
{
 
   stack<int>S;
   S.push(6);
   S.push(16);
   S.push(26);
   cout<<S.size()<<endl;
   S.pop();
   cout<<S.top()<<endl;
   cout<<S.empty()<<endl;
    return 0;
}