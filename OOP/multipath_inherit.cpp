#include<bits/stdc++.h>
using namespace std;

class Human 
{
  public:
  string name;

  void display()
  {
    cout<<" My name is "<<name<<endl;
  }

};

class Engineer : public virtual Human
{
 public:
 string specilization;
 void work()
 {
    cout<<" I have specialization in "<<specilization<<endl;
 }
};

class Youtuber : public virtual Human 
{
  public:
  int subcribers;

  void contentcreator()
  {
    cout<<" I have a subcriber base of "<<subcribers<<endl;
  }
};

class CodeTeacher: public Youtuber, public Engineer
{
    public:
    int salary ;
    CodeTeacher (string name, string specilization, int subcriber, int salary)
    {
        this->name=name;
        this->specilization=specilization;
        this->subcribers=subcribers;
        this->salary=salary;
    }
    
};

int main ()
{
 
 CodeTeacher A1("Rohit","CSE",49000,99);
 A1.display();
 
    return 0;
}