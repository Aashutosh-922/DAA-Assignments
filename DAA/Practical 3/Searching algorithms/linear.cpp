//implementation of linear search

//Time complexity = O(n)
#include <iostream>
using namespace std;

int linearSearch(int arr[], int N, int x)
{
	int i;
	for (i = 0; i < N; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

int main()
{
	int arr[] = {90,80,70,50,40};
	int x = 100;
	int N = sizeof(arr) / sizeof(arr[0]);

	int ans = linearSearch(arr, N, x);
	if(ans==-1)
    {
        cout<<"Element is not present in array"<<endl;
    }
    else{
        cout<<"Element is present at index : "<<ans<<endl;
    }
	return 0;
}
