/*  
*   Constructor
*   Destructor
*   Parameterized Constructor
*   Assignment operator
*/

#include<iostream>
using namespace std;

class sample
{

    int a;
    int b;
    char *str;
    
    public:
       
        sample()
        {
            cout<<"Default Constructor"<<endl;
        }
        sample(int i)
        {
            a=i;
            cout<<"Paramterized Constructor"<<endl;
        }
        sample(sample &i)
        {
            //a=i.a;
            cout<<"Copy Constructor"<<endl;
        }
        void operator=(sample obj)
        {
            this->a=obj.a;
             cout<<"Assinment operator"<<endl;
        }
        void display()
        {
            cout<<a<<endl;
        }
        ~sample()
        {
            cout<<"Default Destructor"<<endl;
        }
    
};

 
void res(sample s1)
{
    
    cout<<"I'm in res"<<endl;
    // return s1;
}

int main()
{
    
    sample *s5=new sample(); // New can be overloaded. new calls the constructor
    int *a= new int(5);

    delete s5;

    int *arr=new int[5];

    delete []arr;

    return 0;
}