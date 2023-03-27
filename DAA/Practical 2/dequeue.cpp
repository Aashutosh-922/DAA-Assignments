#include<iostream>
using namespace std;

int queue[100], n = 100, front = - 1, rear = - 1;
void dequeue() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
};
int main()
{
    dequeue();
}