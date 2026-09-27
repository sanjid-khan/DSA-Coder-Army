#include<bits/stdc++.h>
using namespace std;
int main ()
{
 
 ofstream fout;
 fout.open("z1.txt");
 fout<<" hello india"<<endl;
 fout<<" hello rohit"<<endl;
 fout<<" hello bhai"<<endl;
 fout.close();

 ifstream fin;
 fin.open("z1.txt");
 string line;
 while(getline(fin,line))
 {
    cout<<line<<endl;
 }
 fin.close();
   
    return 0;
}