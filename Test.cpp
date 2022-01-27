#include<iostream>
using namespace std;


class test
{
    private:
        int a;
        static int b;

    public:
        test()
        {
            cout<<"I Am a constrcuctor"<<endl;
            cout<<"value of b: "<<b<<endl;
            cout<<"value of a: "<<a<<endl;
            a=100;
            test::b=200;
        }
        ~test()
        {
            cout<<"I Am a Destrcuctor"<<endl;
            cout<<"value of b"<<b<<endl;
         
        }
        void print() //inline
        {
            cout<<"Print a: "<<a<<endl;
            cout<<"value of b"<<b<<endl;
        }

        void input(int x);
};
int test::b=0;
inline void test::input(int x)
{
    static int z=10;
    z++;
    a=x;
    b++;

    cout<<"value of z"<<z<<endl;
     cout<<"value of b"<<b<<endl;
    
}

int main()
{
    test t1,t2;
    cout<<"Size of object: "<<sizeof(t1)<<endl<<"Size of Class: "<<sizeof(test)<<endl;
    t1.input(10);
    t2.input(20);
    t1.print();
    t2.print();
   
}