#include<bits/stdc++.h>
using namespace std;
//student
//boy
//girl
//male
//female

class Student
{
   public:
   void print ()
   {
    cout<<" I am studnet"<<endl;
   }
};

class Male
{
 public:
 void Maleprint()
 {
    cout<<" I am male"<<endl;
 }
};

class FeMale
{
 public:
 void FeMaleprint()
 {
    cout<<" I am Female"<<endl;
 }
};

class Boy: public Student , public Male
{
    public:
    void Boyprint()
    {
        cout<<" I am boy"<<endl;
    }
};

class Girl: public  Student, public FeMale
{
public:
void  Girlprint()
{
    cout<<" I am girl"<<endl;
}
};

int main ()
{
 Girl G1;
 G1.print();
 Boy B1;
 B1.Maleprint(); 
 return 0;
}