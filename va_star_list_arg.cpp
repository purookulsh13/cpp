#include<iostream>
#include<cstdarg>
using namespace std;
int findmax(int tot_num,...);
int main()
{
    int max;
    max=findmax(5,23,15,1,92,50);
    cout<<"MAx = "<<max<<endl;
    
    max=findmax(3,100,300,250);
    cout<<"MAx = "<<max<<endl;
    return 0;
}

int findmax(int tot_num,...)
{
    int max,count,num;
    va_list ptr;
    va_start(ptr,tot_num);
    va_arg(ptr,int);
    for(count=1;count<tot_num;count++)
    {
        num=va_arg(ptr,int);
        if(num>max)
            max=num;
    }
    return max;
}