#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

struct team
{
    char player_name[20];
    int player_no;
    char player_type[20];
};

int main()
{
    team play[11];

    int key;
    do{
        cout<<endl<<"1.Create Team";
        cout<<endl<<"2.View team";
        cout<<endl<<"3.View for a player";
        cout<<endl<<"4.Exit";
        cin>>key;

        switch(key)
        {
            case 1:
                {
                    for(int i=0;i<11;i++)
                    {
                        // cout<<"Enter details for players"<<i+1<<endl;

                        cout<<"Enter name : "<<endl;
                        cin>>play[i].player_name;

                        cout<<"Enter player number : "<<endl;
                        cin>>play[i].player_no;
                        
                        cout<<"Enter player type : "<<endl;
                        cin>>play[i].player_type;

                    }

                    break;
                }

            case 2:
                {
                    for(int i=0;i<11;i++)
                    {
                        cout<<"Player name : "<<play[i].player_name<<endl;
                        cout<<"Player number : "<<play[i].player_no<<endl;
                        cout<<"Player type : "<<play[i].player_type<<endl;
                        
                    }
                    break;
                }

            case 3:
                {
                    int search;
                    cout<<"Enter the player number : ";
                    cin>>search;

                    for(int i=0;i<11;i++)
                    {
                        if(search==play[i].player_no)
                        {
                            cout<<"Player name : "<<play[i].player_name<<endl;
                            cout<<"Player number : "<<play[i].player_no<<endl;
                            cout<<"Player type : "<<play[i].player_type<<endl;
                        }
                    }
                    break;
                }

            case 4:
            {
                goto again;
            }
        }
    }while(key!=4);

    again:
    cout<<"Byee";

    return 0;
}