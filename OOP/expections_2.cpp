#include<bits/stdc++.h>
using namespace std;
int main ()
{
 int a,b;
 cin>>a>>b;

 try{
    if(b==0)
    throw " Divide by ) is not possible"; //aikhan jei kono kichu deya jabe
    int c=a/b;
    cout<<c<<endl;
 }
 catch ( const char *e)
 {
    cout<<"Exception Occred: "<<e<<endl;
 }
   
    return 0;
}