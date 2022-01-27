#include<iostream>
using namespace std;

class multi
{
    int a,b;
    public:
        int mul()
        {
            cout<<"Enter any two numbers : "<<endl;
            cin>>a>>b;
            int c=a*b;
            return c;
        }
};

class display: private multi
{
    public:
        void show()
        {
            int res=mul();
            cout<<res<<endl;
        }
};

int main()
{
    display d;
    d.show();
}