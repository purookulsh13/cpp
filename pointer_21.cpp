#include<iostream>
using namespace std;
struct s1
{
    char *str;
    struct s1 *next;
};
int main()
{
    static struct s1 arr[] =    {
                                    {"Akhil",arr+1},
                                    {"Nikhil",arr+2},
                                    {"Anant",arr}
                                };
    struct s1 *p[3];
    int i;
    for(i=0;i<=2;i++)
        p[i]=arr[i].next;
    cout<<p[0]->str<<" "<<*p->str<<" "<<(**p).str<<endl;
    swap(*p,arr);
    cout<<p[0]->str<<endl;
    cout<<*p->str<<endl;
    cout<<*p->next->str<<endl;
    swap(p[0],p[0]->next);
    cout<<p[0]->str;
    cout<<(*++p[0].str)<<endl;
    cout<<(++(*++(*p)->next).str)<<endl;
    return 0;
}

void swap(struct s1 *p1,struct s1 *p2)
{
    char *temp;
    temp=p1->str;
    p1->str=p2->str;
    p2->str=temp;
}