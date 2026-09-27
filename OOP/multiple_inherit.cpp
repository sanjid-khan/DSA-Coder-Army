#include<bits/stdc++.h>
using namespace std;
class Engineer
{
 public:
 string specilization;

 Engineer ()
 {
    cout<<" Hello engineers"<<endl;
 }

 void work()
 {
    cout<<" I have specialization in "<<specilization<<endl;
 }
};

class Youtuber
{
  public:
  int subcribers;

  Youtuber()
  {
    cout<<" Hello Youtuber"<<endl;
  }

  void contentcreator()
  {
    cout<<" I have a subcriber base of "<<subcribers<<endl;
  }
};

class CodeTeacher: public Engineer, public Youtuber
            // ai khan jeida age thakbe setar constructor age call hobe
{
    public:
    string name;
    CodeTeacher()
    {
        cout<<"Hello Coder"<<endl;
    }
    CodeTeacher (string name, string specilization, int subcriber)
    {
        this->name=name;
        this->specilization=specilization;
        this->subcribers=subcribers;
    }
    void showcase ()
    {
        cout<<" My name is "<<name<<endl;
        work();
        contentcreator();

    }
};

int main ()
{
 
 CodeTeacher A1("Rohit","CSE",49000);
 A1.showcase();
   
    return 0;
}