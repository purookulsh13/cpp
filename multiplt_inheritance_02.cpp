#include<iostream>
using namespace std;

class test1
{
    protected:
        int a;
    public:
        void num1(int n)
        {
            a=n;
        }
};

class test2
{
    protected:
        int b;
    public:
        void num2(int n)
        {
            b=n;
        }
};

class result: public test1,public test2
{
    public:
        void display()
        {
            cout<<"Addition of two numbers : "<<a+b<<endl;
        }
};

int main()
{
    result res;
    res.num1(10);
    res.num2(25);
    res.display();

    return 0;
}