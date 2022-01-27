#include<iostream>
using namespace std;
void swap(int *x,int *y);

int main()
{
    int a=10;
    int b=55;
    swap(&a,&b);
    cout<<"Value at a = "<<a<<endl;
    cout<<"Value at b = "<<b;
    
}

void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}