/*/
Написати функцію, яка отримує покажчик на статичний масив і його розмір. 
Функція розподіляє додатні, від'ємні та нульові елементи в окремі динамічні масиви.
/*/
#include <iostream>
using namespace std;

void distributeElements(int* arr, int size, int*& positives, int& posSize, int*& negatives, int& negSize, int*& zeros, int& zeroSize) {
    posSize = negSize = zeroSize = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) ++posSize;
        else if (arr[i] < 0) ++negSize;
        else ++zeroSize;
    }
    
    positives = new int[posSize];
    negatives = new int[negSize];
    zeros = new int[zeroSize];

    int posIndex = 0, negIndex = 0, zeroIndex = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) positives[posIndex++] = arr[i];
        else if (arr[i] < 0) negatives[negIndex++] = arr[i];
        else zeros[zeroIndex++] = arr[i];
    }
}

int main() {
    int arr[] = {1, -2, 0, 3, -4, 0, 5, -6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int* positives;
    int* negatives;
    int* zeros;
    int posSize, negSize, zeroSize;

    distributeElements(arr, size, positives, posSize, negatives, negSize, zeros, zeroSize);

    cout << "Positive elements: ";
    for (int i = 0; i < posSize; ++i) {
        cout << positives[i] << " ";
    }
    cout << endl;

    cout << "Negative elements: ";
    for (int i = 0; i < negSize; ++i) {
        cout << negatives[i] << " ";
    }
    cout << endl;

    cout << "Zero elements: ";
    for (int i = 0; i < zeroSize; ++i) {
        cout << zeros[i] << " ";
    }
    cout << endl;
    delete[] positives;
    delete[] negatives;
    delete[] zeros;

    return 0;
}