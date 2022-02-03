#include<iostream>
using namespace std;

int fact(int n);
int main(){
    int a,t;
    cin>>a;
    t=a;
    int res = fact(t);
    cout<<"factiorial of "<<a<<" : "<<res<<endl;

    return 0;
}

int fact(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return n*fact(n-1);
}