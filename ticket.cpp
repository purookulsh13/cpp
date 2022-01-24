/*
    struct person
    {
       char name[15];
       int age;
    };
=================================================================
    distance travlled                   fare
    <=200 Miles                         $5/Mile
    >200 & <300 Miles                   $4/Mile
    >=300 Miles                         $3/Mile
==================================================================
    Ticket
    Members                     Type
    PNR                         String
    DOT                         Date
    Passenger                   person
    from                        string
    to                          string
    traversed                   int
===================================================================
    struct date
    {
        int day;
        int month;
        int year;
    }
===================================================================
*/

/*
Q. Using the following structure definiton for nested structure 'Ticket' given below, Write a program to enter 
    the details of 5 tickets and calculate the ticket fares for each of the following depending on distance \
    travelled
*/

#include<iostream>
using namespace std;

struct person{
    char name[15];
    int age;
};

struct date{
    int day;
    int month;
    int year;
};

struct ticket
{
    char PNR[15];
    date DOT;
    person passenger;
    char from[20];
    char destination[20];
    int traversed;
};

void accept(ticket[],int n);
void fare(ticket[],int n);
void dispaly(ticket[],int n);


int main()
{
    int choice;
    ticket T[50];
    int index;
    do
    {
        cout<<"########## Ticket booking ###########"<<endl;
        cout<<"!1! Enter passenger information"<<endl;
        cout<<"!2! Ticket fare for passenger"<<endl;
        cout<<"!3! Print tickets"<<endl;
        cout<<"!4! Quit Program"<<endl;
        cout<<"!*! Enter choice : "<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"For how many passenger the tickets to booked for <30 : ";
                cin>>index;
                accept(T,index);
                break;
            }
            case 2:
            {
                fare(T,index);
                break;
            }
            case 3:
            {
                display(T,index);
                break;
            }
            default:
            {
                if(choice!=4)
                    cout<<"\nPlease press valid choice";
            }
        }
    } while (choice!=4);

    cout<<"Enter the following details : "<<endl;
    
}