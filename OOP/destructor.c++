#include<bits/stdc++.h>
using namespace std;
class Customer
{
    string name;
    int *data;

    public:
    Customer ()
    {
        name="rohit";
        data=new int;
        *data=10;
        cout<<"constructor is called\n";
    }

    //destructor
    ~Customer()
    {
        delete data;
        cout<<"Destructor is called\n";
    }
};

int main ()
{
 
 Customer A1;

    return 0;
}