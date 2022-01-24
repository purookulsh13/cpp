#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"Largest number among three number is "<<a;
    }
    else if(b>a && b>c)
    {
        cout<<"Largest number among three number is "<<b;
    }
    else
    {
        cout<<"Largest number among three number is "<<c;
    }
    return 0;
}