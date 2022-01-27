#include<iostream>
using namespace std;

int main()
{
    int arr[]={11,22,33,44,55,66};
    int i,*j;
    j=&arr[0];
    for(i=0;i<6;i++)
    {
        cout<<j<<"\t"<<*j<<endl;
        j++;
    }
}