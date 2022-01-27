#include<iostream>
using namespace std;

int main()
{
    int arr[]={10,20,30,40,50,60,70};
    int i=4,*j,*k,*x,*y;
    j=&i;
    cout<<j<<endl;
    j=j+9;
    cout<<j<<endl;
    k=&i;
    cout<<k<<endl;
    k=k-3;
    cout<<k<<endl;
    x=&arr[1];
    y=&arr[5];
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<y-x<<endl;
    j=&arr[4];
    k=(arr+4);
    if(j==k)
        cout<<"THe two pointer point to be same loction";
    else
        cout<<"THe two pointer point to be same loction";
    
    return 0;
}