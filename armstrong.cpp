#include<iostream>
using namespace std;

int main()
{
    int n,temp,rem,arm=0;
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        arm+=rem*rem*rem;
        temp=temp/10;
    }

    if(arm==n)
        cout<<"Armstrong number";
    else
        cout<<"Not a Armstrong number";
    return 0;
}