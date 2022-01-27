#include<iostream>
using namespace std;
struct book
{
    char name[25];
    char author[25];
    int callno;
};
int main()
{
    struct book b1 = {"Let us C","YPK",101};
    struct book *ptr;
    ptr=&b1;
    cout<<b1.name<<" "<<b1.author<<" "<<b1.callno<<endl;
    cout<<ptr->name<<" "<<ptr->author<<" "<<ptr->callno;
}