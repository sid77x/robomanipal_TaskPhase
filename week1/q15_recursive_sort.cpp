#include <iostream>
using namespace std;

void bubble_sort_recursive(int arr[], int n) {
  if (n == 1) {
    return;
  }

  for (int i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      swap(arr[i], arr[i + 1]);
    }
  }

  bubble_sort_recursive(arr, n - 1);
}

int main() {
  int a[100], n, i;
  cout << "Enter the no. of elements you wish to enter: ";
  cin >> n;
  for (i = 0; i < n; i++) {
    cout << "Enter element: ";
    cin >> a[i];
  }
  cout << "\n";

  bubble_sort_recursive(a, n);

  cout << "Sorted array : \n";
  for (i = 0; i < n; i++) {
    cout << a[i] << "\t";
  }
  cout << "\n";
  return 0;
}
