#include<iostream>
using namespace std;
int ar(int *r);
int peri(int *r);
int main()
{
    int rad=21;
    // cin>>rad;
    int area=(ar(&rad));
    int perimeter=(peri(&rad));
    cout<<"Area of a circle = "<<area<<endl;
    cout<<"Perimeter of a circle = "<<perimeter<<endl;
}

int ar(int *r)
{
    return float((3.14*(*r)*(*r)));
}

int peri(int *r)
{
    return float((2*3.14*(*r)));
}