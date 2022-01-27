#include<iostream>
using namespace std;

class sample
{
    public:
        void fun1()
        {
            cout<<"IN FUN 1"<<endl;
        }
        void fun2()
        {
            cout<<"IN FUN 2"<<endl;
        }
        void fun3()
        {
            cout<<"IN FUN 3"<<endl;
        }    
};

int main()
{
    sample so;
    void (sample::*p[3])()={&sample::fun1,&sample::fun2,&sample::fun3};
    for(int i=0;i<3;i++)
        (so.*p[i])();

    return 0;
}