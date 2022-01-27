#include<iostream>
using namespace std;

int main()
{
    int i=5,*ii;
    float f=3.14,*ff;
    char c='t',*cc;
    cout<<i<<endl;
    cout<<f<<endl;
    cout<<c<<endl;
    ii=&i;ff=&f;cc=&c;
    cout<<ii<<endl;
    // cout<<*ii<<endl;
    cout<<ff<<endl;
    // cout<<*ff<<endl;
    cout<<cc<<endl;
    // cout<<*cc<<endl;
    ++ii;++ff;++cc;
    cout<<ii<<endl;
    cout<<ff<<endl;
    cout<<cc<<endl;
}