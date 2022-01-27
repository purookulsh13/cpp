#include<iostream>
using namespace std;

class test
{
    int age;
    string name;

    public:
        void insert(int d,string n)
        {
            age=d;
            name=n;
        }
        void showdata()
        {
            cout<<"Name : "<<name<<"\t\t"<<"Age : "<<age<<endl;
        }
};

int main()
{
    test t1,t2;
    t1.insert(18,"Puroo");
    t2.insert(22,"MSDHONI");
    t1.showdata();
    t2.showdata();


}