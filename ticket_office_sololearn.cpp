#include <iostream>
using namespace std;

int main() {
    int ages[5];
    
    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
    }
    int young=ages[0];
    for(int i=1;i<5;i++)
    {
        if(young>ages[i])
        {
            young=ages[i];
            cout<<"youngest age : "<<young<<endl;
        }
        
        
    }
    cout<<"Final youngest age : "<<young<<endl;
    float dis;
    dis=(float)50-50*((float)young)/100;
    cout<<dis;
    
    return 0;
}