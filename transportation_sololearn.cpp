#include <iostream>
using namespace std;

int main() {
    int total_pass;
    cin>>total_pass;
    int bus_pass=50;
    int last_bus=0;
    do
    {
        if(total_pass>=50)
        {
            total_pass=total_pass-bus_pass;
            cout<<"After evry loop total passenger left : "<<total_pass<<endl;
        }
        else
            goto m;
    }while(total_pass!=0);
    m:
    last_bus=bus_pass-total_pass;
    cout<<"At the End: "<<last_bus;
    
    return 0;
}