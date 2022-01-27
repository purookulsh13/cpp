#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n,i,sum=0;
    cout<<"Enter the number of students : ";
    cin>>n;
    int *p=new int[n];
    if(p==NULL)
    {
        cout<<"Memory allocation unsuccessfull";
        exit(0);
    }
    cout<<"Enter marks : ";
    for(i=0;i<n;i++)
        cin>>p[i];
    for(i=0;i<n;i++)
        sum=sum+p[i];
    int avg=sum/n;
    cout<<"Average marks = "<<avg;

    delete(p);

    return 0;
}