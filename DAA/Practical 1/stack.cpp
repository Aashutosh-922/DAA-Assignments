// implementation of stack using array

#include <iostream>
using namespace std;
int stack[100], n=100, top=-1;

void push(int val) {
   if(top>=n-1)
   cout<<"Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}

void pop() {
   if(top<=-1)
   cout<<" Underflow"<<endl;
   else {
      cout<<" popped element : "<< stack[top] <<endl;
      top--;
   }
}

void display() {
   if(top>=0) {
      cout<<" elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<" empty";
}

int main() {
   int ch, val;
   cout<<"choices :\n 1.push\n 2.pop\n 3.display stack\n 4.Exit\n";
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}