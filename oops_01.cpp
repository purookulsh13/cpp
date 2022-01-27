#include<iostream>
using namespace std;

class sample
{
    public:
        int data;
        string name;
    
};

int main() 
{
    sample obj;
    obj.data=18;
    obj.name="Puroo";
    cout<<obj.data<<endl;
    cout<<obj.name<<endl;
    return 0;
}
