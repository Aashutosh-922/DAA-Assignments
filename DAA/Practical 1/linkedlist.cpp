#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};
 void InsertAtEnd(node* &head,int data)
{
    node* n=new node(data);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
       temp=temp->next;
    }
    temp->next=n;
}

void print(node *head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){
    node* head=NULL;
    InsertAtEnd(head,11);
    InsertAtEnd(head,12);
    InsertAtEnd(head,13);
    InsertAtEnd(head,14);
    print(head);
}

   