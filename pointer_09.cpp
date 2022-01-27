#include<iostream>
using namespace std;
void display(int);
void display2(int *b);
int main()
{
    int marks[]={55,65,75,56,78,78,90};
    int i;
    for(i=0;i<=6;i++)
        display(marks[i]);
    cout<<endl;
    for(i=0;i<=6;i++)
        display2(&marks[i]);
}

void display(int a)
{
    cout<<a<<"\t";
}

void display2(int *b)
{
    cout<<*b<<"\t";
}