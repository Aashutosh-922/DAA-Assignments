#include <iostream>
using namespace std;
int queue[100], n = 100, front = - 1, rear = - 1;
void enqueue() {
   int val;
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
     cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
};
int main()
{   
    int t;
    cin>>t;
    while(t--){
    enqueue();
    }

}