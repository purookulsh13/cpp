#include<iostream>
using namespace std;

int main()
{
    int i=5;
    int *a=&i;
    int **b=&a;

    cout<<"Value of i = "<<i<<endl;
    cout<<"Address of i = "<<&i<<endl;
    cout<<"Value of i = "<<*(&i)<<endl;
    cout<<"Address at a = "<<a<<endl;
    cout<<"Address of a = "<<&a<<endl;
    cout<<"Value at a ="<<*a<<endl;
    cout<<"Value at b ="<<b<<endl;
    cout<<"Address of b = "<<&b<<endl;
    cout<<"Value at **b = "<<*b<<endl;
}