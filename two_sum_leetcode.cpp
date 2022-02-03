
#include<iostream>
using namespace std;

class solution{
    public:
        int arr[100];
        void set_data(int n){
            for(int i=0;i<n;i++)
                cin>>arr[i];
        }
        void get_data(int n,int t){
            for(int i=0;i<n;i++){
                if(arr[i]+arr[i+1]==t)
                    cout<<i<<","<<i+1<<endl;
            }
        }    
};

int main(){
    solution s;
    int n,t;
    cin>>n;
    s.set_data(n);
    cin>>t;
    s.get_data(n,t);
    
    return 0;
}