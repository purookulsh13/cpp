#include<iostream>
using namespace std;

struct marks
{
    int math;
    int english;
    int hindi;   
};

struct student
{
    string name;
    int age;
    int roll_no;
    struct marks ma;
};

int percentage(int,int,int);
int main()
{
    struct student s1,s2,s3;
    // struct marks m1
    cout<<"Name : "<<"\t"<<"Age : "<<"\t"<<"roll number : "<<"\t"<<"marks of three subject : "<<endl;
    cin>>s1.name>>s1.age>>s1.roll_no>>s1.ma.math>>s1.ma.english>>s1.ma.hindi;
    cin>>s2.name>>s2.age>>s2.roll_no>>s2.ma.math>>s2.ma.english>>s2.ma.hindi;
    cin>>s3.name>>s3.age>>s3.roll_no>>s3.ma.math>>s3.ma.english>>s3.ma.hindi;
    
    cout<<s1.name<<"\t"<<s1.age<<"\t"<<s1.roll_no<<"\t"<<s1.ma.math<<"\t"<<s1.ma.english<<"\t"<<s1.ma.hindi<<endl;
    cout<<s2.name<<"\t"<<s2.age<<"\t"<<s2.roll_no<<"\t"<<s2.ma.math<<"\t"<<s2.ma.english<<"\t"<<s2.ma.hindi<<endl;
    cout<<s3.name<<"\t"<<s3.age<<"\t"<<s3.roll_no<<"\t"<<s3.ma.math<<"\t"<<s3.ma.english<<"\t"<<s3.ma.hindi<<endl;
    cout<<endl<<"\n";
    int sum1,sum2,sum3;
    sum1=s1.ma.math+s1.ma.english+s1.ma.hindi;
    cout<<"Total marks of roll no "<<s1.roll_no<<" : "<<sum1<<endl;
    sum2=s2.ma.math+s2.ma.english+s2.ma.hindi;
    cout<<"Total marks of roll no "<<s2.roll_no<<" : "<<sum2<<endl;
    sum3=s3.ma.math+s3.ma.english+s3.ma.hindi;
    cout<<"Total marks of roll no "<<s3.roll_no<<" : "<<sum3<<endl;

    if(sum1>sum2 && sum1>sum3)
    {
        cout<<"Highest marks of roll number "<<s1.roll_no<<" in the class"<<endl;
    }
    else if(sum2>sum1 && sum2>sum3)
    {
        cout<<"Highest marks of roll number "<<s2.roll_no<<" in the class"<<endl;
    }
    else
    {
        cout<<"Highest marks of roll number "<<s3.roll_no<<" in the class"<<endl;
    }

    percentage(sum1,sum2,sum3);
    

}


int percentage(int s1,int s2,int s3)
{
    int per1,per2,per3;
    per1=s1/3;
    per2=s2/3;
    per3=s3/3;

    cout<<"Percentage of student 1 is : "<<per1<<endl;
    cout<<"Percentage of student 2 is : "<<per2<<endl;
    cout<<"Percentage of student 3 is : "<<per3<<endl;

    return 0;
}