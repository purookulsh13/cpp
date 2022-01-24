#include<iostream>
using namespace std;

int main()
{
    int s1,s2,s3,s4,s5,sum,percentage;
    cout<<"Enter the marks of five subjects";
    cin>>s1>>s2>>s3>>s4>>s5;
    sum=s1+s2+s3+s4+s5;
    percentage=(sum/5);
    cout<<"Percentage of a student in five subject is :  "<<percentage;
    return 0;
}