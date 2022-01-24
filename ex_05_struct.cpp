#include<iostream>
using namespace std;

struct library
{
    char book_name[15];
    int book_idNo;
    char book_shelf[5];
}

int main()
{
    library l1;
    char str[]="Cleopetra";

    cout<<"Enter details : ";
    cout<<endl<<"Book Name";
    gets(l1.book_name);
    cout<<endl<<"book_idNo";
    cin>>l1.book_idNo;
    cout<<endl<<"Book Shelf";
    gets(l1.book_shelf);

    if(strcmp(str,l1.book_name)==0)
    {
        cout<<"Book found"
    }
    else
        cout<<"Book doesn't found";
}