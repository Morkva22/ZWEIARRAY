#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M;
    cout << "Enter the size of array: ";
    cin >> M;

    vector<int> A(M);
    cout << "Enter " << M << " elements: ";
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }

    int choice;
    cout << "Enter 1 to delete even values, 2 to delete odd values: ";
    cin >> choice;

    vector<int> result;
    if (choice == 1) {
        for (int i = 0; i < M; ++i) {
            if (A[i] % 2 != 0) {
                result.push_back(A[i]);
            }
        }
    } else if (choice == 2) {
        for (int i = 0; i < M; ++i) {
            if (A[i] % 2 == 0) {
                result.push_back(A[i]);
            }
        }
    } else {
        cout << "Invalid" << endl;
        return 1;
    }
    cout << "Result array: ";
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}