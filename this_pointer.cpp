#include<iostream>
using namespace std;

class top
{
    int id;
    int salary;

    public:
       top(int i,int sal)
       {    
            this->id=i;
            this->salary=sal;
       }
       void show()
       {
           cout<<id<<"\t"<<salary<<endl;
       }
       ~top()
       {
           cout<<"object is free"<<endl;
       } 

};

int main()
{
    
    top t1(101,12000);
    t1.show();
    top t2(102,9050);
    t2.show();
}