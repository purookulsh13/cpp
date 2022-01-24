#include<iostream>
using namespace std;

int main()
{
    int a=10,b=4,c;
    c=a%b;
    cout<<" a   "<<++a;
    cout<<"\n a   "<<(++a + (a++) + b);
    cout<<"\n a   "<<(a++ + (a++) + (b++ * c));
}