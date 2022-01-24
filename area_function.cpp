#include<iostream>
using namespace std;
#define pi 3.14
int peri(int );
int area(int );

int main()
{
    int rad;
    cout<<"Radius : ";
    cin>>rad;
    peri(rad);
    area(rad);
}

int peri(int r)
{
    int 
    p=2*pi*r;
    cout<<"Perimeter of circle is "<<p<<endl;
    return 0;
}

int area(int r)
{
    int a;
    a=pi*r*r;
    cout<<"Area of circle is "<<a;
    return 0;
}