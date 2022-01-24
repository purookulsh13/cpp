// 1 + 3 + 5 + 7........+ n   "n should be user input"

#include<iostream>
using namespace std;

int main()
{
    int n,i=1,sum=0;
    cin>>n;
    while(i<=n*2)
    {
        cout<<i<<endl;
        sum=sum+i;
        i=i+2;
    }    
    
    return 0;
}