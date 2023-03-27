#include<bits/stdc++.h>
using namespace std;

int selection(int arr[],int n)
{  
    int i,j;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
           if (arr[j] > arr[j + 1])
           swap(arr[j], arr[j + 1]);
        }
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
    int arr[]={34,7,9,23,14};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection(arr,n);
    display(arr,n);
}