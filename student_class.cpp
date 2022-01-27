#include<iostream>
using namespace std;

class student
{
    private:
        string& name;
        int& age;
        int& roll_no;
    
    public:
        student(string n,int a,int r):name(n),age(a),roll_no(r)
        {       
            // name=n;
            // age=a;
            // roll_no=r;
        }

        void display()
        {
            cout<<"Name : "<<name<<"    "<<"Age : "<<age<<"    "<<"Roll number : "<<roll_no<<endl;
        }

        ~student()
        {
            cout<<"Calling student destructor"<<endl;
        }

        
};

class marks
{
    protected:
        const int math;
        int english;
        int hindi;
    public:
        void set_marks(int m,int e,int h)
        {
            math=m;
            english=e;
            hindi=h;
        }
        void display()
        {
            cout<<"Marks of math : "<<math<<" "<<"English : "<<english<<" "<<"Hindi : "<<hindi<<endl;
        }

        int percentage();
        

        friend int sum(marks i);
};

int marks::percentage()
{
    static int per=(math+english+hindi)/3;
    cout<<"Percentage : "<<per<<endl;
    return per;
}

inline int sum(marks i)
{
    return i.math+i.english+i.hindi;
}

int main()
{
    // student s1,s2,s3;
    marks m1,m2,m3;
    student s1("Puroo",18,101);
    student s2("Pratyush",22,102);
    student s3("Paurush",26,103);
    m1.set_marks(50,88,67);
    m2.set_marks(55,65,90);
    m3.set_marks(50,70,60);
    s1.display();
    s2.display();
    s3.display();
    m1.display();
    m2.display();
    m3.display();
    
    m1=m2;
    m1.display()
    // cout<<"Total marks of student 1 is : "<<sum(m1)<<endl;
    // marks::m1.percentage();
    // cout<<"Total marks of student 2 is : "<<sum(m2)<<endl;
    // marks::m2.percentage();
    // cout<<"Total marks of student 3 is : "<<sum(m3)<<endl;
    // marks::m3.percentage();
}