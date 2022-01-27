#include<iostream>
using namespace std;

class employee
{
    int employee_id;
    string employee_name;
    int salary;

    public:
        employee()
        {
            cout<<"Default constructor called"<<endl;
        }
        employee(int id,string n,int sal)
        {
            cout<<"Paramterized constructor called"<<endl;
            employee_id=id;
            employee_name=n;
            salary=sal;
        }
        void display()
        {
            cout<<"Employee id : "<<employee_id<<"\t"<<"Employee name : "<<employee_name<<"\t"<<"Salary : "<<salary<<endl;

        }
};

int main()
{
    employee e1(101,"Virat",25000);
    employee e2(102,"Rohit",24000);
    employee e3(103,"Hardik",9000);
    employee e4;
    e1.display();
    e2.display();
    e3.display();
}