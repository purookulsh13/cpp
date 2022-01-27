#include<iostream>
using namespace std;

class B;

class A
{
    int x;
    public:
        void insert(int i)
        {
            x=i;
        }
    friend void min(A,B);
};

class B
{
    int y;
    public:
        void insert(int i)
        {
            y=i;
        }
    friend void min(A,B);
};

void min(A a,B b)
{
    if(a.x<=b.y)  
        cout<<"Min : "<<a.x<<endl;  
    else  
        cout<<"Min : "<<b.y<<endl;
}

int main()
{
    A a;  
    B b;  
    a.insert(10);  
    b.insert(20);  
    min(a,b);  
    
    return 0;  
}