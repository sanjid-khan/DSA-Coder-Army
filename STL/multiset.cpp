#include<bits/stdc++.h>
using namespace std;

//duplicate elements will be present
//sorted order hoga
//red-black,AVL

int main ()
{
    multiset<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(10);
    s.insert(30);

    for( auto it =s.begin(); it!=s.end(); it++ )
      {
        cout<<*it<<endl;
      }
   
    return 0;
}