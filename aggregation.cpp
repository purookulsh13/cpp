#include<iostream>
using namespace std;

class address
{
    public:
        string add_line,state;
        int pincode;
        address(string add_line,string state,int pincode)
        {
            this->add_line=add_line;
            this->state=state;
            this->pincode=pincode;
        }
};

class employee
{
    private:
        address *a;
    public:
        int id;
        string name;
        employee(int id,string name,address *a)
        {
            this->id=id;
            this->name=name;
            this->a=a;
        }
        void display()
        {
            cout<<id<<"\t"<<name<<" "<<a->add_line<<" "<<a->state<<"\t"<<a->pincode<<endl;
        }
};

int main()
{
    address a=address("D-104,parvarti road","uttarpradesh",10134);
    employee e=employee(1001,"PUroO",&a);
    e.display();
    return 0;
}