#include<bits/stdc++.h>
using namespace std;
class Student
{
   private:
   string name;
   int age, roll_number;
   string grade;
   //function getter and setter
   public:
   void setname(string s)
   {
    if(s.size()==0)
    {
      cout<<"Invalid name: ";
      return;
    }
    name=s;
   }
   void setage(int a)
   {
    if(age<0 || age>100)
    {
      cout<<"Invalid age";
      return ;
    }
    age=a;
   }
   void setroll_number(int r)
   {
    roll_number=r;
   }
   void setgrade(string g)
   {
    grade=g;
   }

   void getname()
   {
    cout<<name<<endl;
   }
   void getage()
   {
    cout<<age<<endl;
   }

   int getroll_number()
   {
    return roll_number;
   }

   string get_grade ( int pin)
   {
    if(pin==123)
    {
      return grade;
    }
    return " ";
   }
};
int main () 
{
    Student S1;
    S1.setname("Rohit");
    S1.setage(10);
    S1.setroll_number(21);
    S1.setgrade("A+");
    S1.getname();
    S1.getage();
    cout<<S1.getroll_number();
    cout<<S1.get_grade(1234);
    return 0;
}