#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    char op;
    cout<<"Enter the first number : ";
    cin>>n1;
    cout<<"Enter the Second number : ";
    cin>>n2;
    cout<<"Choose any Arthmetical operator : ";
    cin>>op;
    switch(op)
    {
        case '+':
        {
            cout<<"Selected operator is Addition"<<endl;
            cout<<"Sum of two given number is "<<n1+n2;
            break;
        }
        case '-':
        {
            cout<<"Selected operator is Subtraction"<<endl;
            cout<<"Difference of two given number is "<<n1-n2;
            break;
        }
        case '*':
        {
            cout<<"Selected operator is Multiplition"<<endl;
            cout<<"Product of two given number is "<<n1*n2;
            break;
        }
        case '/':
        {
            cout<<"Selected operator is Division";
            cout<<"quotient of two given number is "<<n1/n2;
            break;
        }
        case '%':
        {
            cout<<"Selected operator is Remainder"<<endl;
            cout<<"Remainder of two given number is "<<n1%n2;
            break;
        }
    }
}