#include<bits/stdc++.h>
using namespace std;
class Customer
{
  string name;
  int account_number, balance;
  //static  int total_customer;
  public:
  static  int total_customer; //without object a access er jonno ane ante hobe
  Customer (string name, int account_number, int balance)
  {
    this->name=name;
    this->account_number=account_number;
    this->balance=balance;
    total_customer++;
  }
  void display()
  {
    cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer<<endl;
  }

  void display_total()
  {
    cout<<total_customer<<endl;
  }

};

int Customer ::total_customer=0;

int main ()
{
 Customer A1("Rohit",1,1000);
 Customer A2("Mohit",2,1800);
 Customer A3("Mohan",3,2000);
 Customer :: total_customer=5;
 A1.display_total();
   
    return 0;
}