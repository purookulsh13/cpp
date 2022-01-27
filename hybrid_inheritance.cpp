#include<iostream>
using namespace std;

class A
{
    protected:
        int a;
    public:
        void get_a()
        {
            cout<<"Enter the value of a: ";
            cin>>a;
            cout<<endl;
        }
};

class B: public A{
    protected:
        int b;
    public:
        void get_b()
        {
            cout<<"Enter the value of b: ";
            cin>>b;
            cout<<endl;
        }
};

class C
{
    protected:
        int c;
    public:
        void get_c()
        {
            cout<<"Eneter the value of c: ";
            cin>>c;
            cout<<endl;
        }
};

class D: public B,public C
{
    public:
        void display()
        {
            get_a();
            get_b();
            get_c();
            cout<<"Multiplication of a*b*c : "<<a*b*c;
        }
};

int main()
{
    D dis;
    dis.display();

    return 0;
}