#include<iostream>
using namespace std;

class shape
{
    public:
        int a,b;

        void get_shape(int i,int j=0)
        {
            a=i;
            b=j;
        }
};

class rectangle: public shape{
    public:
        int rect_area()
        {
            int res=a*b;
            return res;
        }
};

class square: public shape{
    public:
        int sq_area()
        {
            int res=a*a;
            return res;
        }
};

class triangle: public shape{
    public:
        int tri_area()
        {
            int res=0.5*a*b;
            return res;
        }
};

int main()
{
    rectangle r;
    square s;
    triangle t;
    int len,bred;
    cout<<"Enter the length and breadth of rectangle : "<<endl;
    cin>>len>>bred;
    r.get_shape(len,bred);
    int temp=r.rect_area();
    cout<<"Area of a rectangle : "<<temp<<endl;

    cout<<"Enter the length of a square : "<<endl;
    cin>>len;
    s.get_shape(len);
    temp=s.sq_area();
    cout<<"Area of a square : "<<temp<<endl;

    cout<<"Enter the length and breadth of triangle : "<<endl;
    cin>>len>>bred;
    t.get_shape(len,bred);
    temp=t.tri_area();
    cout<<"Area of a tirangle : "<<temp<<endl;

}
