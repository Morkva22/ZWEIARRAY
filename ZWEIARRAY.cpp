/*/
Дано два масиви: А[M] і B[N] (M і N вводяться з клавіатури).
Необхідно створити третій масив мінімально можливого розміру,
в якому потрібно зібрати спільні елементи двох масивів без повторень.

/*/
#include <iostream>
using namespace std;

void equalarrays(int *A, int *B, int *C, int M, int N, int &index) {
    index = 0;
    for (int i = 0; i < M; i++) {
        bool uniq = true;
        for (int j = 0; j < index; j++) {
            if (C[j] == A[i]) {
                uniq = false;
            }
        }
        if (uniq) {
            C[index++] = A[i];
        }
    }

    for (int i = 0; i < N; i++) {
        bool uniq = true;
        for (int j = 0; j < index; j++) {
            if (C[j] == B[i]) {
                uniq = false;
            }
        }
        if (uniq) {
            C[index++] = B[i];
        }
    }
    cout << "New array C: " << endl;
    for (int i = 0; i < index; i++) {
        cout << C[i] << " ";
    }
    cout << endl;
}

int main() {
    int M, N;
    cout << "Enter the size M: ";
    cin >> M;
    cout << "Enter the size N: ";
    cin >> N;

    int* A = new int[M];
    int* B = new int[N];
    int* C = new int[M + N];

    cout << "Input numbers in A:" << endl;
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << "Input numbers in B:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    int index;
    equalarrays(A, B, C, M, N, index);

    delete[] A;
    delete[] B;
    delete[] C;
}