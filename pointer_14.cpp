#include<iostream>
using namespace std;

int main()
{
    int arr[]={2,4,6,8,10,12};
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<"\t";
        cout<<*(arr+i)<<"\t";
        cout<<*(i+arr)<<"\t";
        cout<<i[arr]<<"\t"<<endl;
    }
}