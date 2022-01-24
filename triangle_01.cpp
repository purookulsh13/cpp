#include<iostream>
using namespace std;

int main()
{
    int no,i,j;
    cout<<"Enter the number of rows for a triangle : ";
    cin>>no;
    int temp=no;
    for(i=0;i<=temp;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<"*";
            
        }
        cout<<"\n";
        temp=temp-1;
    }
}