/*/
Написати перевантажені функції та протестувати їх в основній програмі:

Знаходження максимального значення в одновимірному масиві;
Знаходження максимального значення у двовимірному масиві;
Знаходження максимального значення в тривимірному масиві;
Знаходження максимального значення двох цілих;
Знаходження максимального значення трьох цілих.

/*/
#include <iostream>
using namespace std;

int max1(int a, int b) {
    return a > b ? a : b;
}

int max2(int a, int b, int c) {
    return max1(max1(a, b), c);
}

int max3(int *arr, int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int max2m(int **arr, int rows, int cols) {
    int maxVal = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
    }
    return maxVal;
}

int max3m(int ***arr, int rows, int cols, int depth) {
    int maxVal = arr[0][0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (int k = 0; k < depth; k++) {
                if (arr[i][j][k] > maxVal) {
                    maxVal = arr[i][j][k];
                }
            }
        }
    }
    return maxVal;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int arr3[] = {1, 2, 3, 4, 5};
    int *arr2D[] = {arr1, arr2, arr3};
    int rows = 3;
    int cols = 5;

    int arr3D[2][2][2] = {
        {{1, 2}, {3, 4}},
        {{5, 6}, {7, 8}}
    };
    int ***arr3DPtr = new int**[2];
    for (int i = 0; i < 2; i++) {
        arr3DPtr[i] = new int*[2];
        for (int j = 0; j < 2; j++) {
            arr3DPtr[i][j] = arr3D[i][j];
        }
    }

    cout << "Max2N: " << max1(5, 6) << endl;
    cout << "Max3N: " << max2(5, 6, 7) << endl;
    cout << "Max1: " << max3(arr1, 5) << endl;
    cout << "Max2: " << max2m(arr2D, rows, cols) << endl;
    cout << "Max4: " << max3m(arr3DPtr, 2, 2, 2) << endl;

    for (int i = 0; i < 2; i++) {
        delete[] arr3DPtr[i];
    }
    delete[] arr3DPtr;
}