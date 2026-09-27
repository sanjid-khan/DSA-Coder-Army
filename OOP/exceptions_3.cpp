#include<bits/stdc++.h>
using namespace std;
int main ()
{
 
 try { 
 int *p= new int[1000000000000000000];
 cout<<"Memory allocation is successfully"<<endl;
 delete []p;
 }
 catch ( const bad_alloc &e)
 {
    cout<<"exception occured due to line 9: "<<e.what()<<endl;
 }
    return 0;
}