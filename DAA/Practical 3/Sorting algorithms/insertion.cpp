// Insertion sort in C++

#include <iostream>
using namespace std;

void print(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void insertion(int arr[], int size) {
  for (int i = 1; i < size; i++) {
    int key = arr[i];
    int j = i - 1;

    while (key < arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = key;
  }
}

int main() {
  int arr[] = {8,10,15,4,6,9};
  int size = sizeof(arr) / sizeof(arr[0]);
  insertion(arr, size);
  cout << "Sorted array :\n";
  print(arr, size);
}