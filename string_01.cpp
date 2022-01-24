#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string arr[10]={"My","name","is","Puroo","Kulshrestha"};
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
            cout<<arr[i]<<endl;
    }
    return 0;
}