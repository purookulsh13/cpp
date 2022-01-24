#include<iostream>
using namespace std;
#define PI 3.14
// const float PI=3.14;
int main()
{
    int rad,area,peri;
    cin>>rad;
    area=PI*rad*rad;
    peri=2*PI*rad;
    cout<<"Area of a circle is "<<area<<endl;
    cout<<"Perimeter of a circle is "<<peri;
}