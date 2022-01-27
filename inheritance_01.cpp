#include<iostream>
using namespace std;

class parent
{
   
    public:
        int a;
        int b;
        void get_data(int i,int j)
        {
            a=i;
            b=j;
        }
        void display()
        {
            cout<<"First value : "<<a<<endl;
            cout<<"Second value : "<<b<<endl;
        }
};

class child: public parent
{
    public:
        int add()
        {
            return a+b;
        }
};

int main()
{
    child c;
    c.get_data(10,30);
    int res=c.add();
    cout<<"Sum of two number : "<<res<<endl;
    return 0;
}