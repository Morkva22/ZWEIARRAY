/*/
У двовимірному масиві цілих чисел порахувати суму елементів:

У кожному рядку;
У кожному стовпчику;
Одночасно по всіх рядках і всіх стовпцях.
Оформити наступним чином:
/*/

#include <iostream>
#include <cstdlib> 
using namespace std;

int main()
{
    const int ROWS = 3;
    const int COLS = 4;
    

    int arr[ROWS][COLS];
    srand(time(0));
    for (int i =0; i < ROWS; i++) {
        for (int o =0; o < COLS; o++){
            arr[i][o] = rand()%2;
        }
    }
    for (int i = 0; i <ROWS; i++){
        int sum = 0;
        for (int k = 0; k < COLS; k++)
        {
            cout << arr[i][k] <<" ";
            sum += arr[i][k];
        }
        cout  << "| " << sum << endl;
    }
    cout << "_____________________" << endl;
    int sum1 = 0;
    sum1 = arr[0][0] + arr[1][0] + arr[2][0];
    int sum2 = 0;
    sum2 = arr[0][1] + arr[1][1] + arr[2][1];
    int sum3 = 0;
    sum3 = arr[0][2] + arr[1][2] + arr[2][2];
    int sum4 = 0;
    sum4 = arr[0][3] + arr[1][3] + arr[2][3];

    int summ = 0;
    summ = sum1 + sum2 + sum3 + sum4;
    cout<< sum1  << " " << sum2 << " " << sum3 << " " << sum4 << "   "<<  summ<< endl;
}