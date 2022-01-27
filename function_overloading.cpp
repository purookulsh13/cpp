#include<iostream>
using namespace std;

class addition
{
    public:
        // int a,b;
        int add(int a,int b)
        {
            return a+b;
        }

        int add(int a,int b,int c)
        {
            return a+b+c;
        }
};

int main()
{
    addition a;
    cout<<a.add(5,4)<<endl;
    cout<<a.add(10,20,30)<<endl;

    return 0;
}