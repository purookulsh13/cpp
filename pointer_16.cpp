#include<iostream>
using namespace std;

void display(int arr[][4],int row,int col);
int main()
{
    int a[3][4]={
                    1,2,3,4,
                    5,6,7,8,
                    9,0,1,6
                };
    display(a,3,4);
}

void display(int arr[][4],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}