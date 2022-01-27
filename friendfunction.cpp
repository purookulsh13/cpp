#include<iostream>
using namespace std;

class box
{

    private:
        int length;
    
    public:
        box(): length(0){}
        friend int boxlength(box);
};

int boxlength(box b)
{
    b.length +=20;
    return b.length;

}

int main()
{
    box b;
    // b.length();
    cout<<boxlength(b)<<endl;
}