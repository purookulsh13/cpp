#include<iostream>
using namespace std;

int main()
{
    int a[]={10,20,30,40,50};
    char *p;
    p=(char *)a;
    cout<<*((int *)p+4);
}