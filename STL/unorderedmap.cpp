#include<bits/stdc++.h>
using namespace std;
//Unique keys are present, duplicate keys are not allowed
//not neccessary it should be in sorted form
//hashing
//insert,search,delete constant time execution
//unordered_multimap....nije nije korvbo
int main ()
{
 
    unordered_map<int,int>m;
    m.insert(make_pair(20,30));
    m.insert(make_pair(30,310));
    m.insert(make_pair(40,230));
    m.insert(make_pair(20,230));
    m.insert(make_pair(50,30));

    m[20]=70; //kintu map a aida kora jabe na...

    for( auto it =m.begin(); it!=m.end(); it++ )
      {
        cout<<it->first<<" "<<it->second<<endl;
      }


   
    return 0;
}