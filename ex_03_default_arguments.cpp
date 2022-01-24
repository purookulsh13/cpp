#include<iostream>
using namespace std;

int product(int x,int y=3)
{
    int prod;
    prod=x*y;
    return prod;
}

int main()
{
    cout<<product(10)<<endl; 
    cout<<product(10,12)<<endl;
    return 0;
}