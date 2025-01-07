/*/
Дано масив: А[M] (M вводиться з клавіатури).
Необхідно видалити з масиву парні або непарні значення.
Користувач вводить дані в масив, а також за допомогою меню вирішує, що потрібно видалити.
/*/
#include <iostream>
using namespace std;

int main() {
    int M;
    cout << "Enter size of the arr ";
    cin >> M;

    int* A = new int[M];
    for (int i = 0; i < M; i++) {
        cout << "Enter the element of the arr ";
        cin >> A[i];
    }

    int choice;
    cout << "Menu: ";
    cout << "1. Delete even numbers; 2. Delete odd numbers ";
    cin >> choice;

    if (choice == 1) {
        for (int i = 0; i < M; i++) {
            if (A[i] % 2 == 0) {
                for (int j = i; j < M - 1; j++) {
                    A[j] = A[j + 1];
                }
                M--;
                i--;
            }
        }
    }
    else if (choice == 2) {
        for (int i = 0; i < M; i++) {
            if (A[i] % 2 != 0) {
                for (int j = i; j < M - 1; j++) {
                    A[j] = A[j + 1];
                }
                M--;
                i--;
            }
        }
    }
    for (int i = 0; i < M; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    delete[] A;
    return 0;
}