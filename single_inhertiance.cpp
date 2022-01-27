#include<iostream>
using namespace std;

class salary
{
    public:
        float salary=50000;
};

class bonus: public salary{
    public:
        float bonus=20000;
};

int main()
{
    bonus b;
    cout<<"Salary : "<<b.salary<<endl;
    cout<<"Bonus : "<<b.bonus<<endl;
}
