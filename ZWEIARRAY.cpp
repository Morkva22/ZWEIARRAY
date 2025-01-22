/*/
Написати програму, що виконує сортування одновимірного масиву цілих чисел методом вставок.
/*/
#include <iostream>
using namespace std;

void Sort(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int numb = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > numb) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = numb;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 11, 18, 5, 6};
    int size = 5;

    cout << "Array before: ";
    printArray(arr, size);
    Sort(arr, size);
    cout << "Array after: ";
    printArray(arr, size);

    return 0;
}