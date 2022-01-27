#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class container
{
    private:
        struct node
        {
            int data;
            node *next;
        }*head,*curr;
        int count;

    public:
        container()
        {
            head=curr=NULL;
            count=0;
        }
        void add(int n)
        {
            node *temp=new node;
            temp->data=n;
            temp->next=NULL;
            if(head==NULL)
                head=curr=temp;
            else
            {
                node *q;
                q=head;
                while(q->next!=NULL)
                    q=q->next;
                q->next=temp;
            }
            count++;
        }
        int getcount()
        {
            return count;
        }    
        friend class smartpointer_linkedlist;
};

class smartpointer_linkedlist
{
    private:
        container *cptr;
    
    public:
        smartpointer_linkedlist(container *t)
        {
            cptr=t;
        }
        int opertaor*()
        {
            if(cptr->curr==NULL)
                return NULL;
            else
            {
                int i=cptr->curr->data;
                return i;
            }
        }
        void operator++(int n)
        {
            if(cptr->curr!=NULL)
                cptr->curr=cptr->curr->next;
        }
};

int main()
{
    container c;
    c.add(10);
    c.add(20);
    c.add(0);
    c.add(-40);
    c.add(50);
    smartpointer_linkedlist sptr(&c);
    for(int i=0;i<c.getcount();i++)
    {
        cout<<*sptr<<endl;
        sptr++;
    }
    return 0;
}