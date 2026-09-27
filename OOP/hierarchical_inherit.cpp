#include<bits/stdc++.h>
using namespace std;
class Human
{
  protected:
  string name;
  int age;

   public:
   
   Human()
   {

   };

   Human(string name, int age)
   {
    this->name=name;
    this->age=age;
   }

   void display()
   {
    cout<<name<<" "<<age<<endl;
   }

   void work() //ata directly access kora jabe jodi o object create hoy nai
   {
    cout<<" I am working"<<endl;
   }
};

class Student : public Human //aikhan a public lekha tai
//human public er moto treat hobe 
{
    int roll_number,fees;

    public:
    Student (string name , int age, int roll_number, int fees) : Human(name,age)
    {
        this->roll_number=roll_number;
        this->fees=fees;
    }

    void display()
    {
        cout<<name<<" "<<age<<" "<<roll_number<<" "<<fees<<endl;
    }
};

class Teacher: public Human
{
    int salary;

    public:
    Teacher( int salary, string name , int age)
    {
        this->salary=salary;
        this->name=name;
        this->age=age;
    }

    void display()
    {
        cout<<name<<" "<<age<<" "<<salary<<endl;
    }
};

int main ()
{
 Student A1("rohit",26,32,90);
 A1.display();
 Teacher A2(99,"mohit",23);
 A2.display();
   
    return 0;
}