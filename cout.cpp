#include<iostream>
using namespace std;

int add(int,int);
int diff(int,int);
int mul(int,int);
float divide(int,int);
int sq(int,int);
int main()
{
    cout<<"Hello World"<<endl;
    int a,b;
    cin>>a>>b;

    int res_sq=sq(a,b);
    cout<<res_sq<<endl;
    /*int res_add=add(a,b);
    int res_sub=diff(a,b);
    int res_multi=mul(a,b);
    int res_divide=divide(a,b);
    cout<<res_add<<endl;
    cout<<res_sub<<endl;
    cout<<res_multi<<endl;
    cout<<res_divide<<endl;*
    return 0;*/
}

int add(int i,int j)
{
    return i+j;
}
int diff(int i,int j)
{
    return i-j;
}
float divide(int i,int j)
{
    float a = i/j;
    return a;
}
int mul(int i,int j)
{
    return i*j;
}

int sq(int i,int j)
{
    int res=((i*i)+(j*j)+2*i*j);
    return res;
}