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
    void display(struct book *);
    struct book b1={"Let us C","YPK",101};
    display(&b1);
}

void display(struct book *b)
{
    cout<<b->name<<" "<<b->author<<" "<<b->callno;
}