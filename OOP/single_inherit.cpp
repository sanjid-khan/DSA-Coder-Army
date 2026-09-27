#include<bits/stdc++.h>
using namespace std;
class Human
{
  protected:
  string name;
  int age;

   public:
   void work() //ata directly access kora jabe jodi o object create hoy nai
   {
    cout<<" I am working"<<endl;
   }
};

class Student : public Human //aikhan a public lekha tai
//vitorer function er public moto treat hobe
//kintu object protected tai protected er moto treat hobe
{
    int roll_number,fees;

    public:
    Student (string name , int age, int roll_number, int fees)
    {
        this->name=name;
        this->age=age;
        this->roll_number=roll_number;
        this->fees=fees;
    }
};

int main ()
{
 Student A1("rohit",26,32,90);
 A1.work();
   
    return 0;
}