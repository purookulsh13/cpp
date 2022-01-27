#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int a;
    double d2;
    string s2;
    
    cin>>a;
    cin>>d2;
    cin>>s2;
    string s3=s2+s;
    cout<<a+i<<endl;
    cout<<d+d2<<endl;
    cout<<s3;
    return 0;
}
