/*/
Написати програму, що реалізує сортування масиву методом удосконаленого сортування бульбашковим методом.
Удосконалення полягає в тому, щоб аналізувати кількість перестановок на кожному кроці,
якщо ця кількість дорівнює нулю, то продовжувати сортування немає сенсу — масив відсортовано. 
/*/
#include <iostream>
using namespace std;

void BubbleSort2(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size = 7;
    int arr[] = {64, 34, 25, 12, 22, 11, 90};

    cout << "Array before: ";
    printArray(arr, size);

    BubbleSort2(arr, size);

    cout << "Array after: ";
    printArray(arr, size);

    return 0;
}