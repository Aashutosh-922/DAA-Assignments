#include <bits/stdc++.h>
#include <vector>
using namespace std;
 
//function to heapify the tree
void heapify(vector<int> &heap, int i){
 int size = heap.size();
 int largest = i;
 
 // Finding the left and the right child
 int l = 2 * i + 1;
 int r = 2 * i + 2;
 
 //Setting the largest out of root, left child & right child
 if (l < size && heap[l] > heap[largest])
   largest = l;
 if (r < size && heap[r] > heap[largest])
   largest = r;
 
 // If index is not equal to largest, perform swap
 if (largest != i){
   swap(heap[i], heap[largest]);
   heapify(heap, largest);
 }
}
 
//function to insert elements in the heap
void insert(vector<int> &heap, int newNum){
 int size = heap.size();
 
 //checking if it is the first element
 if (size == 0)
   heap.push_back(newNum);
 else
   heap.push_back(newNum);
   for (int i = size / 2 - 1; i >= 0; i--)
     //heapifying the tree
     heapify(heap, i);
}
 
//function to delete from heap
void deleteNode(vector<int> &heap, int num){
 int size = heap.size();
 int i;
 
 //search if element is present in the heap
 for (i = 0; i < size; i++)
   if (num == heap[i])
     break;
  //swapping the last element with the root element
 swap(heap[i], heap[size - 1]);
 //removing the element
 heap.pop_back();
 for (int i = size / 2 - 1; i >= 0; i--)
   //heapifying the tree once again
   heapify(heap, i);
}
