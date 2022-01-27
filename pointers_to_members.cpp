#include<iostream>
using namespace std;

struct sample
{
    int a;
    float b;
    int *c;
    float *d;
    int **e;
    float **f;
};

int main()
{
    int sample::*p1=&sample::a;
    float sample::*p2=&sample::b;
    int *sample::*p3=&sample::c;
    float *sample::*p4=&sample::d;
    int **sample::*p5=&sample::e;
    float **sample::*p6=&sample::f;
    sample so = {10,3.14f,&so.a,&so.b,&so.c,&so.d};
    sample *sp;
    sp=&so;
    cout<<endl<<so.*p1<<endl<<so.*p2;
    cout<<endl<<*(so.*p3)<<endl<<*(so.*p4);
    cout<<endl<<**(so.*p5)<<endl<<**(so.*p6);
    cout<<endl<<sp->*p1<<endl<<sp->*p2;
    cout<<endl<<*(sp->*p3)<<endl<<*(sp->*p4);
    cout<<endl<<**(sp->*p5)<<endl<<**(sp->*p6);

    *(so.*p3)=20;
    **(sp->*p6)=6.28f;

    cout<<endl<<so.*p1<<endl<<so.*p2;
    
    return 0;
}