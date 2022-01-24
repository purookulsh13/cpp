#include<iostream>
#include<conio.h>
using namespace std;

void calculate(int arr[5])
{
    for(int i=0;i<5;i++)
    {
        arr[i]=arr[i]+10;
    }
}

int main()
{
    int array_example[5];

    cout<<"Enter the elements of the array\n";

    for(int a=0;a<5;a++)
    {
        cin>>array_example[a];
    }
    calculate(array_example);
    cout<<"The modified array is as follows\n";

    for(int a=0;a<5;a++)
    {
        cout<<array_example[a]<<"\n";
    }
}