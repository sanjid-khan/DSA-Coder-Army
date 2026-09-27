#include<bits/stdc++.h>
using namespace std;
class Animal
{
   public:

  virtual void speak()
   {
    cout<<"huhu"<<endl;
   }
};

class  Dog: public Animal
{
   public:

   void speak()
   {
    cout<<"bark"<<endl;
   }
};

int main ()
{
   Animal *p;
   p= new Dog();
   p->speak();
   
    return 0;
}

//virtual use korle run time a decide korbe mane jar pointer create korbe
// er virtual use na korle compile time a decide korbe mane shuru te jake
//point korbe