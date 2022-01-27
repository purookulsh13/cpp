#include<iostream>
using namespace std;

int main()
{
    int i=10;
    float f=3.14;
    char *ii,*ff;
    ii=(char *)&i;
    ff=(char *)&f;
    cout<<"Address in i = "<<ii;
    cout<<"Address in f = "<<ff;
    cout<<"Value in i = "<<*ii;
    cout<<"Value in i"<<*ff;
}
