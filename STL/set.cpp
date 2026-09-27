#include<bits/stdc++.h>
using namespace std;

    //only unique value will be stored
    //store value in sorted order(ascending)
    //insertion,deletion and search operations have (O(log n))
    //(O(log n)) making them fast for most use cases
    //generally implemented using Red-Black-Tree
    //we cant sort it in descending order using greater<type>   


class person
{
    public:
    int age;
    string name;

    bool operator <(const person &other) const{
        return age<other.age;
    }

};


int main ()
{
 
   // set<int, greater<int> >s;
   // s.insert(10);
   // s.insert(20);
   // s.insert(110);
   // s.insert(200);
   // s.insert(10);
   // s.insert(20);
   // s.insert(110);
   // s.insert(210);

    //delete
   // s.erase(110);


    //210 200 110 20 10
    //search the element
    
    //find --> return the iterator of that number
   // if(s.find(200)!=s.end())
   // cout<<"Present\n";
   // else
   // cout<<"Absent\n";

    //count --> count of that number
    //if(s.count(200))
   // cout<<"Present\n";
   // else
   // cout<<"Absent\n";

   // cout<<s.count(110)<<" ";

   // for( auto it =s.begin(); it!=s.end(); it++ )
    //{
    //    cout<<*it<<endl;
   // }

   set<person> s;

    person p1, p2, p3;
    p1.age = 10, p1.name = "rohit";
    p2.age = 30, p2.name = "mmohit";
    p3.age = 5,  p3.name = "sohit";

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);

    for( auto it=s.begin(); it!=s.end();it++)
    {
        cout<<it->age<<" "<<it->name<<endl;
    }
       
    return 0;
}