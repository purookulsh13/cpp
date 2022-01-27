#include<iostream>
using namespace std;

int main()
{
    FILE *fp;
    char ch;
    int nol,noc=0;
    fp=fopen("armstrong.cpp","r");
    while(fp!=NULL)
    {
        ch=fgetc(fp);
        if(ch==EOF)
            break;
        noc++;
        if(ch==EOF)
            break;
        noc++;
    }
    fclose(fp);
    cout<<"Number of characters : "<<noc;
}