#include<iostream>
using namespace std;

class test1
{
    public:
        
        virtual void display()
        {
            cout<<"test1 display";
        }
        
};

class test2: public test1
{
    void display()
    {
        cout<<"test2 display"<<endl;
    }
    
};

int main()
{
    test1* t=new test1(); 
    test2 t2;
    t=&t2;
    t->display();
    delete t;
}