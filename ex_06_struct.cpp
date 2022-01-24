#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

struct employee
{
    char emp_name[15];
    int emp_idNo;
    char emp_desig[15];
};

int main()
{
    employee e1[10];

    for(int i=0;i<10;i++)
    {
        cout<<"Enter details of a employee "<<i+1;
        cout<<endl<<"Employee name";
        gets(e1[i].emp_name);
        cout<<endl<<"Employee id Number";
        cin>>e1[i].emp_idNo;
        cout<<endl<<"Employee designation";
        cin>>e1[i].emp_desig;

    }

    cout<<endl<<"data stored";

    for(int i=0;i<10;i++)
    {
        cout<<endl<<"1.Name : "<<e1[i].emp_name;

        cout<<endl<<"2. employee id no : "<<e1[i].emp_idNo;
        
        cout<<endl<<"3. employee designation : "<<e1[i].emp_desig;
        
    }
}