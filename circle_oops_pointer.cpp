#include<iostream>
using namespace std;

class circle
{
    private:
        int rad;
        float x,y;
    
    public:
        circle()
        {

        }
        circle(int rr,float xx,float yy)
        {
            rad=rr;
            x=xx;
            y=yy;
        }
        circle& operator=(circle& c)
        {
            cout<<endl<<"Assignment operator invoked"<<endl;
            rad=c.rad;
            x=c.x;
            y=c.y;
            return *this;
        }
        void showdata()
        {
            cout<<"radius = "<<rad<<endl;
            cout<<"X-coordinate = "<<x<<endl;
            cout<<"Y-coordinate = "<<y<<endl;
            
        }
};

int main()
{
    circle c1(10,2.5,2.5);
    circle c2,c3;
    c3=c2=c1;
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}