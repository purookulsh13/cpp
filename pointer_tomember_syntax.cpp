#include<iostream>
using namespace std;

class sample
{
    public:
        void fun1()
        {
            cout<<this<<" fun1"<<endl;
        }
        void fun2()
        {
            cout<<this<<" fun2"<<endl;
        }
        void fun3()
        {
            cout<<this<<" fun3"<<endl;
        }
};

int  main()
{
    sample so[4];
    void (sample::*p[3])()={&sample::fun1,&sample::fun2,&sample::fun3};
    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=2;j++)
        {
            (so[i].*p[j])();
        }
    }
}