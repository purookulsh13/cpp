#include<iostream>
using namespace std;

int main()
{
    int n,temp,rem,res=0;
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        res=res*10+rem;
        temp=temp/10;
    }
    if(res==n)
        cout<<"Palindrome number";
    else
        cout<<"Not a palindrome number";
}