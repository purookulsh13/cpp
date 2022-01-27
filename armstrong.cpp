#include<iostream>
using namespace std;

int main()
{
    int num,res=0;
    cin>>num;
    int k=num;
    while(num!=0)
    {
        int rem=num%10;
        res=res+(rem*rem*rem);
        num=num/10;
    }

    if(res==k)
        cout<<"Armstrong number";
    else
        cout<<"Not a armstrong number";
}