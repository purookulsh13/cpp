#include<iostream>
using namespace std;

void fun(int,int);
void fun(int,int);

void fun(int a,int b)
{
    cout<<a+b<<endl;
}

void fun(int a,int b=9)
{
    cout<<a*b<<endl;
}

int main()
{
    fun(45);
    fun(46,8);
}