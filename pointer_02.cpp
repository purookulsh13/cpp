#include<iostream>
using namespace std;

int main()
{
    int i=10;
    int *j;
    j = &i;
    cout<<"Value of i = "<<i<<endl;
    cout<<"Address of i = "<<&i<<endl;
    cout<<"Value of i = "<<*(&i)<<endl;
    cout<<"Address of i ="<<j<<endl;
    cout<<"Value of i = "<<*j<<endl;
    cout<<"Address of j = "<<&j<<endl;
    

}