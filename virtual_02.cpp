#include<iostream>
using namespace std;

class vr
{
    public:
        vr()
        {
            cout<<"Inside vr constructor"<<endl;
        }
        virtual ~vr()
        {
            cout<<"Inside vr destructor"<<endl;
        }
};

class d1:  public vr
{
    public:
        d1()
        {
            cout<<"Calling d1 constructor"<<endl;     
        }
        ~d1()
        {
            cout<<"Calling d1 destructor"<<endl;
        }     
};

class d2:  public vr
{
    public:
        d2()
        {
            cout<<"Calling d2 constructor"<<endl;     
        }
        ~d2()
        {
            cout<<"Calling d2 destructor"<<endl;
        }     
};

class d3:  public vr
{
    public:
        d3()
        {
            cout<<"Calling d3 constructor"<<endl;     
        }
        ~d3()
        {
            cout<<"Calling d3 destructor"<<endl;
        }    
};

class d4:  public vr
{
    public:
        d4()
        {
            cout<<"Calling d4 constructor"<<endl;     
        }
        ~d4()
        {
            cout<<"Calling d4 destructor"<<endl;
        }
};

int main()
{
    vr *v;
    
    int a;
    cin>>a;
    switch(a)
    {
        case 1:
        {
            v=new d1();
            break;
        }
        case 2:
        {
            v=new d2();
            break;
        }
        case 3:
        {
            v=new d3();
            break;
        }
        case 4:
        {
            v=new d4();
            break;
        }
        default:
            cout<<"Invalid input"<<endl;
    }
    delete v;
    return 0;
}