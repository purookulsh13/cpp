#include<iostream>
using namespace std;

void display(int *a);
void display2(int b[]);
int main()
{
    int arr[]={12,34,56,78,90};
    display(&arr[0]);
    cout<<endl;
    display2(&arr[0]);
}

void display(int *a)
{
    for(int i=0;i<5;i++)
    {
        cout<<a<<"\t";
        a++;
    }
}

void display2(int b[])
{
    for(int i=0;i<5;i++)
    {
        cout<<b[i]<<"\t";
    }
}