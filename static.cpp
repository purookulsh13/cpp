#include <iostream>  
using namespace std;  
class Account {  
   public:  
       int accno; // instance variable     
       string name; //instance variable  
       static float rateOfInterest;   
       Account(int accno, string name)   
        {    
             this->accno = accno;    
            this->name = name;    
        }    
       void display()    
        {    
            cout<<accno<<"\t"<<name<<"\t"<<rateOfInterest<<endl;   
        }    
};

float Account::rateOfInterest=6.5;  

int main() 
{  
    Account a1=Account(201, "Sanjay");    
    Account a2=Account(202, "Nakul");  
    a1.display();    
    a2.display();    
    return 0;  
}  