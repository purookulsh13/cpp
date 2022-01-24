#include<iostream>
using namespace std;

int main()
{
    int i=10;
    restart:
    cout<<i<<"  ";
    i--;
    if(i>0) goto restart;
    cout<<"BANG! BANG!";
    return 0;
}