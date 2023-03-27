//implementation of queue using linkedlist
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int d)
    {
        data=d;
        next=NULL;
    }
};
class myqueue{
    public:
    node *front, *rear;

    myqueue() 
    { 
        front = rear = NULL; 
    }


    void enqueue(int val)
    {    
        
        node* temp=new node(val);

         if (rear == NULL) {
            front = rear= temp;
            return;
        }
 
        rear->next=temp;
        rear=temp;
    }

    void dequeue()
    {
          if (front == NULL)
            return;

        node* temp = front;
        front = front->next;
 
        if (front == NULL)
            rear = NULL;
 
        delete (temp);
    }
};
int main()
{
    myqueue q;
    q.enqueue(10);
    q.enqueue(20);
    q.dequeue();
    q.dequeue();
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.dequeue();
    cout << "Queue Front is : " << ((q.front != NULL) ? (q.front)->data : -1)<< endl;
    cout << "Queue Rear is  : " << ((q.rear != NULL) ? (q.rear)->data : -1);
}