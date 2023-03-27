//implementation of stack using linkedlist
#include<bits/stdc++.h>
using namespace std;

class node{
	public:
	int data;
	node* next;

	node(int d){
        data=d;
		next=NULL;
	}
};
 class Stack{
	public:
    node* head;
	int s;
	Stack()
	{
		head=NULL;
		s=0;
	}

	void push(int val)
	{
		node* temp=new node(val);
        temp->next=head;
		head=temp;
		s++;

	}
	int pop()
	{
		if(head==NULL)
		{
			return INT_MAX;
		}
      
	  int res=head->data;
	  node*temp=head;
	  head=head->next;
     delete(temp);
	 s--;
	 return res;
	}
	int size(){
		return s;
	}

	bool isEmpty()
    {
        return head == NULL;
    }
	 int peek()
    {
        if (!isEmpty())
            return head->data;
        else
            exit(1);
    }
	 void print()
    {
        node* temp;
  
        if (head == NULL) {
            cout << "\nUnderflow";
            exit(1);
        }
        else {
            temp = head;
            while (temp != NULL) {
  
                cout << temp->data;
  
                temp = temp->next;
                if (temp != NULL)
                    cout << " -> ";
            }
        }
    }
 };
	int main()
{
    Stack s;

    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);
  
    s.print();
  
    cout << "\nTop of stack is " << s.peek() << endl;
  
    s.pop();

    s.print();
  
    cout << "\nTop of stack is " << s.peek() << endl;
  
    return 0;
}
 