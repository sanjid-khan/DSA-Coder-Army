#include<bits/stdc++.h>
using namespace std;

class InvalidAmountError  : public runtime_error
{
    public:
    InvalidAmountError ( const string &msg) : runtime_error(msg)
    {};
};

 class  InsufficientBalanceError: public runtime_error
 {
    public:
     InsufficientBalanceError ( const string &msg) : runtime_error(msg)
    {};
 };

class Customer
{
 string name;
 int balance, account_number;

 public:
 Customer(string name, int balance, int account_number)
 {
    this->name=name;
    this->balance=balance;
    this->account_number=account_number;
 }

//deposit
void deposit( int amount)
{
    if(amount<=0)
    throw InvalidAmountError ("amount should be greater than 0");

    balance+=amount;
    cout<<amount<<" rs is credited successfully"<<endl;
}
    //withdraw
    void withdraw ( int amount)
    {
        if(amount>0 && amount<=balance)
        {
            balance-=amount;
            cout<<amount<<" rs is debited successfully"<<endl;
        }

        else if (amount<0)
        {
            throw InvalidAmountError ("amount should be greater than 0");
        }

        else
        {
            throw InsufficientBalanceError (" your balance is low");
        }
    }
};

int main ()
{
  Customer C1("rohit",5000,10);

  try
  {
    C1.deposit(100);
    C1.withdraw(6000);
    C1.deposit(100);
  }
  catch(const InvalidAmountError  &e)
  {
    cout<<"Exception Occured: "<<e.what()<<endl;
  }

   catch ( const InsufficientBalanceError &e)
 {
    cout<<"exception occured: "<<e.what()<<endl;
 }

 //default
 catch(...)
 {
    cout<<"Exception occured"<<endl;
 }
    
    return 0;
}