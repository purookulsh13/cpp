#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char str[20];
    cout<<"Enter the string : ";
    gets(str);

    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        {
            str[i]='#';
        }
    }

    puts(str);

    return 0;
}