#include <bits/stdc++.h>
using namespace std;

 int knapSack(vector<int>&val,int ind,vector<int>&wt,int capacity){
         
        if(ind==0) 
          if(wt[ind]<=capacity) return val[0];
          else return 0;
        
        int not_take=knapSack(val,ind-1,wt,capacity);
        int take=0;
        
        if(wt[ind]<=capacity) take=val[ind]+knapSack(val,ind-1,wt,capacity-wt[ind]);
        
     return max(not_take,take);
    }

int main() {

  int n;
  cout<<"Enter number of items : ";
  cin>>n;

  int capacity=0;
  cout<<"Enter knapsack Capacity : ";
  cin>>capacity;
  vector<int>value(n),weights(n);

  cout<<"Enter jewelry value and its weight for each item :";
  for(int i=0;i<n;i++){
    cin>>value[i]>>weights[i];
  }

  cout << "Total knapsack profit = " << knapSack(value, n, weights, capacity) << endl;
}