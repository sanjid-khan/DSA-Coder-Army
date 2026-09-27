#include<bits/stdc++.h>
using namespace std;
int main ()
{
 
    //create map
    map<int,int>m;
    //multimap<int,int>m;
    m.insert(make_pair(20,30));
    m.insert(make_pair(30,310));
    m.insert(make_pair(40,230));
    m.insert(make_pair(20,230));
    m.insert(make_pair(50,30));
   // m[100]=60; //insert kar sakte ho value ko, update kar deta hai
   // m[20]=70;
   
    //search, insert, delete
    //cout<<endl;
    //if(m.count(20))
    //cout<<m[20]<<" ";
                      
    //m.erase(20); //delete operation
        
    for( auto it =m.begin(); it!=m.end(); it++ )
      {
        cout<<it->first<<" "<<it->second<<endl;
      }

    return 0;
}