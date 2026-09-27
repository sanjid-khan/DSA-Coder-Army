#include<bits/stdc++.h>
using namespace std;
int main ()
{
 
    unordered_set<int>s;
    //unordered_multiset<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(15);
    s.insert(11);
    s.insert(10);
    s.insert(10);

    for( auto it =s.begin(); it!=s.end(); it++ )
      {
        cout<<*it<<endl;
      }
   
    return 0;
}

//set, multiset, unorderedz_set, unordered_multiset
//set: Unique element , sorted
//multiset: sorted
//unordered_set: Unique
//Unordered_multiset: