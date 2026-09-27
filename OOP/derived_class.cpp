#include<bits/stdc++.h>
using namespace std;
class Human
{
  string religion,color;
  protected:
  string name;
  int age,weight;
};
class Student: private Human
{
  private:
  int roll_number, fees;

  public:

 void fun(string n, int a, int w)
  {
    name=n;
    age=a;
    weight=w;
  }

  void display()
  {
    cout<<name<<" "<<age<<" "<<weight<<" ";
  }
};

int main ()
{
 
 Student A;
 A.fun("rohit",10,50);
 A.display();

   
    return 0;
}