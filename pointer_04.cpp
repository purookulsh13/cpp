#include<iostream>
using namespace std;

int main()
{
    char c='A', *cc=&c;
    int i=54, *ii=&i;
    float f=3.14, *ff=&f;

    cout<<"Value of c = "<<c<<endl;
    cout<<"Address of c = "<<&c<<endl;
    cout<<"Value of c = "<<*(&c)<<endl;
    cout<<"Value of cc = "<<*cc<<endl;
    cout<<"Address of cc = "<<cc<<endl;
    cout<<"Value of i = "<<i<<endl;
    cout<<"Address of i = "<<&i<<endl;
    cout<<"Value of i = "<<*(&i)<<endl;
    cout<<"Value of ii = "<<*ii<<endl;
    cout<<"Address of ii = "<<ii<<endl;
    cout<<"Value of f = "<<f<<endl;
    cout<<"Address of f = "<<&f<<endl;
    cout<<"Value of f = "<<*(&f)<<endl;
    cout<<"Value of ff = "<<*ff<<endl;
    cout<<"Address of ff = "<<ff<<endl;

}