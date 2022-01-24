#include<iostream>
using namespace std;

class calc
{
    int a=5,b=10;
    public:
        int add()
        {
            return a+b;
        }
        int subtract()
        {
           return a-b; 
        }
        int multiply()
        {
            return a*b;
        }
        int divide()
        {
            return a/b;
        }
           
};

int main()
{
    calc obj1,obj2,obj3,obj4;
    int res;
    res=obj1.add();
    cout<<res<<endl;
    res=obj2.subtract();
    cout<<res<<endl;
    res=obj3.multiply();
    cout<<res<<endl;
    res=obj4.divide();
    cout<<res<<endl;    
}
    








