/*/
Дано два масиви: А[M] і B[N] (M і N вводяться з клавіатури).
Необхідно створити третій масив мінімально можливого розміру, в якому потрібно зібрати елементи масивів A і B,
які не є спільними для них, без повторень.
/*/
#include <iostream>
using namespace std;

int main() {
    int M, N;
    cout << "Enter size of array A: ";
    cin >> M;
    cout << "Enter size of array B: ";
    cin >> N;

    int* A = new int[M];
    int* B = new int[N];

    cout << "Input elements of array A:" << endl;
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    cout << "Input elements of array B:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    int* proc = new int[M + N];
    int index = 0;

    for (int i = 0; i < M; i++) {
        int j;
        for (j = 0; j < N; j++) {
            if (A[i] == B[j]) {
                break;
            }
        }
        if (j == N) {
            int k;
            for (k = 0; k < index; k++) {
                if (proc[k] == A[i]) {
                    break;
                }
            }
            if (k == index) {
                proc[index++] = A[i];
            }
        }
    }

    for (int i = 0; i < N; i++) {
        int j;
        for (j = 0; j < M; j++) {
            if (B[i] == A[j]) {
                break;
            }
        }
        if (j == M) {
            int k;
            for (k = 0; k < index; k++) {
                if (proc[k] == B[i]) {
                    break;
                }
            }
            if (k == index) {
                proc[index++] = B[i];
            }
        }
    }

    int* C = new int[index];
    for (int i = 0; i < index; i++) {
        C[i] = proc[i];
    }

    cout << "Resulting array C: ";
    for (int i = 0; i < index; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    delete[] A;
    delete[] B;
    delete[] proc;
    delete[] C;

    return 0;
}