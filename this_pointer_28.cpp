#include<iostream>
using namespace std;

class example
{
    private:
        int i;
    public:
        void setdata(int ii)
        {
            i=ii;
            cout<<endl<<"my object address is "<<this<<endl;
            this->i=ii;
        }
        void showdata()
        {
            cout<<i;
            cout<<endl<<"my object's address is "<<this<<endl;
            cout<<this->i<<endl;
        }
};

int main()
{
    example e1;
    e1.setdata(10);
    e1.showdata();
    return 0;
}