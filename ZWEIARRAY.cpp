/*/
Дано два масиви: А[M] і B[N] (M і N вводяться з клавіатури).
Необхідно створити третій масив мінімально можливого розміру, у якому потрібно зібрати елементи обох масивів

/*/
#include <iostream>
using namespace std;
void main()
{
    const int M = 1;
    const int N = 1;
    const int V = M + N;
    int A[M], B[N], C[V];
    cout << "Input M " << endl;
    for (int i = 0; i < M; i++)
    {
        cin >> A[i];
    }
    cout << "Input N " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }
    for (int i = 0; i < M; i++)
    {
        C[i] = A[i];
    }
    for (int i = 0; i < N; i++)
    {
        C[i + M] = B[i];
    }
    cout <<"third array 'V' - ";
    for (int i = 0; i < V; i++)
    {
        cout << C[i] << " ";
    }
}