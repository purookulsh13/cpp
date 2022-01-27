#include<iostream>
using namespace std;

class dest
{
    public:
        dest()
        {
            cout<<"Calling constructor"<<endl;
        }
        ~dest()
        {
            cout<<"Calling destructor"<<endl;
        }   
};

int main()
{
    dest d1,d2,d3;
}