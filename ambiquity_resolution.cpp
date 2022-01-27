#include<iostream>
using namespace std;

class A
{
    public:
        void one()
        {
            cout<<"CLASS A...."<<endl;
        }
};

class B
{
    public:
        void one()
        {
            cout<<"CLASS B..."<<endl;
        }
};

class C: public A,public B{
    public:
        void display()
        {
            A::one();
            B::one();
        }
};

int main()
{
    C c;
    c.display();
}