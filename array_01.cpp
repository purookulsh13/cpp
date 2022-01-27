#include<iostream>
using namespace std;

class arr{
    int i;
    public:
        void set(int a){
            i=a;
        }
        int get()
        {
            cout<<i<<endl;
        }
};

int main()
{
    arr ob[3];
    for (int i=0;i<3;i++)
    {
        ob[i].set(i+1);
    }
    for (int i=0;i<3;i++)
    {
        ob[i].get();
    }

    return 0;
}