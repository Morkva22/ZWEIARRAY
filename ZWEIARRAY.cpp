/*/
Є стопка оладок різного радіуса.
Єдина операція, що проводиться з ними — між будь-якими двома вставляємо лопатку і змінюємо порядок оладок над лопаткою на зворотний.
 Необхідно за мінімальну кількість таких операцій відсортувати знизу вгору за зменшенням радіуса.
/*/
#include <iostream>
using namespace std;

void flip(int arr[], int i) {
 int start = 0;
 while (start < i) {
  swap(arr[start], arr[i]);
  start++;
  i--;
 }
}

int findMax(int arr[], int n) {
 int maxIndex = 0;
 for (int i = 1; i < n; ++i) {
  if (arr[i] > arr[maxIndex]) {
   maxIndex = i;
  }
 }
 return maxIndex;
}

void pancakeSort(int arr[], int n) {
 for (int currSize = n; currSize > 1; --currSize) {
  int maxIndex = findMax(arr, currSize);
  if (maxIndex != currSize - 1) {
   flip(arr, maxIndex);
   flip(arr, currSize - 1);
  }
 }
}

void printArray(int arr[], int n) {
 for (int i = 0; i < n; ++i) {
  cout << arr[i] << " ";
 }
 cout << endl;
}

int main() {
 int arr[] = {3, 6, 1, 9, 4, 2};
 int n = 6;

 cout << "Array before sorting: ";
 printArray(arr, n);

 pancakeSort(arr, n);

 cout << "Array after sorting: ";
 printArray(arr, n);

 return 0;
}