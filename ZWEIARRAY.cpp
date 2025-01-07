/*/
Дано два масиви: А[M] і B[N] (M і N вводяться з клавіатури).
Необхідно створити третій масив мінімально можливого розміру, у якому потрібно зібрати елементи обох масивів.

/*/
#include <iostream>
using namespace std;
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

    delete[] A;
    delete[] B;
    delete[] C;
}