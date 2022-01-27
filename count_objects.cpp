#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class account
{
    public:
        int acc_no;
        string name;
        static int count;
        account(int acc_no,string name)
        {
            this->acc_no=acc_no;
            this->name=name;
            count++;
        }
        void show()
        {
            cout<<acc_no<<"\t"<<name<<endl;
        }
};
int account::count=0;
int main()
{
    account a1=account(1001,"MESSi");
    account a2=account(1002,"Drogba");
    account a3=account(1004,"XAvi");
    a1.show();
    a2.show();
    a3.show();
    cout<<"Number of objects created : "<<account::count<<endl;
    return 0;
}