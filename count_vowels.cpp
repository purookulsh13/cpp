#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[20];
    int count=0;
    cout<<"Enter a string : ";
    gets(str);

    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            count++;
            
        }
    }
    cout<<"Total number of vowels in a string : "<<count;
    return 0;
}
