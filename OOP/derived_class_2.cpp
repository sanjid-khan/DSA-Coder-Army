#include<bits/stdc++.h>
using namespace std;
class Human
{
  string religion,color;
  public:
  string name;
  int age,weight;
};
class Student: protected  Human
{
  private:
  int roll_number, fees;

  public:
Student (string name, int age, int weight, int roll_number,int fees)
{
  this->name=name;
  this->age=age;
  this->weight=weight;
  this->roll_number=roll_number;
  this->fees=fees;
}
void display()
{
    cout<<name<<" "<<age<<" "<<weight<<" "<<roll_number<<" "<<fees<<endl;
}

};

class Teacher: public Human
{
    int salary, id;
};
 


int main ()
{
 Student A("rohit",25,70,1216,3000);
 A.display();
 Teacher B;
 B.name="mohit";
    return 0;
}