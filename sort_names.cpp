#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char *str[]={"jay","Amol","Ram","Kishore","nikhil","puroo","bob"};
    
    for(int i=0;i<7;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(strcmp(str[i],str[j])>strcmp(str[j],str[i]))
            {
                char *temp;
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    
    for(int i=0;i<7;i++)
    {
        cout<<str[i]<<endl;
    }

}