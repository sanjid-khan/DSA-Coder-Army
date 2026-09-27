#include<bits/stdc++.h>
using namespace std;
class Person
{
 protected:
 string name;

 public:
 void introduce()
 {
    cout<<" Hello my name is "<<name<<endl;
 }
};

class Employee: public Person
{
  protected:
  int salary;
  public:
  void monthly_salary()
  {
    cout<<"My Monthly salary is: "<<salary<<endl;
  }
};

class Manager: public Employee
{
  public:
  string department;
  Manager (string name, int salary, string department)
  {
    this->name=name;
    this->salary=salary;
    this->department=department;
  }

 void work()
 {
    cout<<" I am leading the deparment "<<department<<endl; 
 }

};
int main ()
{
 
 Manager A1("rohit",200,"finance");
 A1.introduce(); 
   
    return 0;
}