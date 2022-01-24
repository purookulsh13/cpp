#include <iostream>
using namespace std;

int main() {
    int n=12;
    // cin >> n;
    while(n!=0)
    {
        cout<<n<<endl;
        n--;
        if(n%5==0)
        {
            cout<<"beep"<<endl;
        }
        else if(n==1)
        {
            cout<<n;
            exit(0);
        }
    }
    
    
    return 0;
}