#include<iostream>
using namespace std;

class shape
{
    public:
        virtual void draw()
        {
            cout<<"drawing..."<<endl;
        }
};

class rectangle: public shape
{
    public:
        void draw()
        {
            cout<<"rectangle drawing"<<endl;
        }
};

class circle: public shape{
    public:
        void draw()
        {
            cout<<"Circle drawing..."<<endl;
        }
};

int main()
{
    shape *s;
    shape sh;
    rectangle r;
    circle c;
    s=&sh;
    s->draw();
    s=&r;
    s->draw();
    s=&c;
    s->draw();
}