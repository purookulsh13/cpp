#include<iostream>
using namespace std;

int *fun();
int main()
{
    int *p;
    p = fun();
    cout<<p<<endl;
    cout<<*p;

}

int *fun()
{
    static int i = 20;
    return &i;
}