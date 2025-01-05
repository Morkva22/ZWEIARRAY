#include <iostream>
using namespace std;
void main()
{
    const int ROWS1 = 5;
    const int COLS1 = 10;
    const int ROWS2 = 5;
    const int COLS2 = 5;
    

    int arr[ROWS1][COLS1];
    int arr2[ROWS2][COLS2];
    srand(time(0));


    
    for (int i =0; i < ROWS1; i++) {
        for (int o =0; o < COLS1; o++){
            arr[i][o] = rand()%2;
          
        }
    }
    cout << "arr2 5]10:" << endl;
    for (int i = 0; i < ROWS1; ++i)
    {
        for (int j = 0; j < COLS1; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < ROWS2; i++) {
        for (int j = 0; j < COLS2; j++) {
            arr2[i][j] = arr[i][2 *  j] + arr[i][2 * j + 1];
        }
    }
    cout << "arr2 5x5:" << endl;
    for (int i = 0; i < ROWS2; i++) {
        for (int j = 0; j < COLS2; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}