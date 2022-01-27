#include<iostream>
using namespace std;

int main()
{
    struct a
    {
        char ch[7];
        char *str;
    };
    struct a s1 = {"Nagpur","Bombay"};
    cout<<s1.ch[0]<<"\t"<<*s1.str<<endl;
    cout<<s1.ch<<"\t"<<s1.str<<endl;    
}
