//implementation of doubly linked list
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d)
    {
        data=d;
        next=NULL;
        prev=NULL;
    }
};

void insertAtHead(Node* &head,int val)
{
     Node* n=new Node(val);
     n->next=head;
     if(head!=NULL)
     {
     head->prev=n;
     }
     head=n;

}

void insertAtEnd(Node* &head,int val)
{

  if(head==NULL)
  {
    insertAtHead(head,val);
    return;
  }
   Node* n=new Node(val);
    Node* temp=head;
     while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}



void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
   Node* head=NULL;
   insertAtEnd(head,3);
   insertAtEnd(head,4);
   insertAtEnd(head,5);
   insertAtEnd(head,6);
   print(head);
   cout<<endl;
   insertAtHead(head,2);
   print(head);


}