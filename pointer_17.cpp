#include<iostream>
using namespace std;

int main()
{
    char name[]="PUROO";
    int i=0;
    while(name[i]){
        cout<<name[i]<<" "<<*(name+i)<<" "<<*(i+name)<<" "<<i[name]<<endl;
        i++;
    }
}