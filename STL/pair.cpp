#include<bits/stdc++.h>
using namespace std;
int main ()
{
   //name,age,weight

    //pair<string,int>p;
    //two method insert
   // p=make_pair("rohit",30);
   // p.first="rohit";
   // p.second=30;

   pair<pair<string,int>, int>p;

   p=make_pair(make_pair("rohit",25),80);

   cout<<p.first.first<<" "<<p.first.second<<" "<<p.second<<endl;


  // pair<string,pair<int,int>>p;
  // p.first="rohit";
   //p.second.first=25;
   //p.second.second=80;

  // p=make_pair("rohit",make_pair(25,80));

  // cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;

   
    return 0;
}