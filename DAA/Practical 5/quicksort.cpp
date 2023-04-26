/* The list of size N is divided into a max of Logn parts, and the merging of all sublists into a single list takes O(N) time, 
 the worst-case run time of this algorithm is O(nLogn) Best Case Time Complexity: O(n*log n) Worst Case Time Complexity: O(n*log n) 
 Average Time Complexity: O(n*log n)*/

//The space complexity of quicksort is O(n*logn).

#include<iostream>
using namespace std;

void swap(int arr[],int i,int j)
{
  int temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;
}

int partition(int arr[],int l,int r)
{
   int pivote=arr[r];
   int i=l-1;

   for(int j=l;j<r;j++)
   {
    if(arr[j]<pivote)
    {
        i++;
        swap(arr,i,j);

    }
   }
    swap(arr,i+1,r);
    return i+1;
   
}

void quicksort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pi=partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);

    }
}

int main()
{   
	cout<<"ENTER N :";
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int l=0,r=n-1;
	quicksort(arr,l,r);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}




	
    
	
