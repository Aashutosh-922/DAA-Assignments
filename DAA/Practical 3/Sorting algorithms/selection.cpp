#include<iostream>
using namespace std;

int Selection(int arr[],int n)
{
    int min;
    for(int i=0;i<n-1;i++)
    {
       min=i;
       for(int j = i+1; j < n ; j++ ) {
        if(arr[ j ] < arr[ min ])  {     
        min = j ;
        }
      }
       swap ( arr[ min], arr[ i ]) ; 
       
    }
}

void display(int arr[],int n)
{
   for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
   int arr[]={10,7,80,19,15,67};
   int n = sizeof(arr) / sizeof(arr[0]);
   Selection(arr,n);
   display(arr,n);
   
}