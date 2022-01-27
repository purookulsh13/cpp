#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[]="OddlengthString";
    char *ptr1=str; 
    char *ptr2=str+sizeof(str)-1;
    int i;
    for(i=0;ptr1!=ptr2;i++)
    {
        ++ptr1; 
        --ptr2;
    }
    cout<<i;
}