#include <iostream>  
using namespace std;  
class Base  
{  
    public: 
    Base()
    {
        cout<<"Base Default constructor"<<endl;
    } 
    ~Base()
    {
        cout<<"Base Default Destructor"<<endl;
    } 
};  
class derived : public Base  
{  
   
    public:  
    derived()
    {
        cout<<"Derived default constructor"<<endl;
    }
    void show()  
    {  
        cout<<"Derived class is derived from the base class."<<endl;  
    } 
    ~derived()
    {
        cout<<"Derived default Destructor"<<endl;
    } 
};  

int main()  
{  
   // Base b; 
    Base *b1;
       

    return 0;  
}  