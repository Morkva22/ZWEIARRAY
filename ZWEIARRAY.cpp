/*/
Напишіть рекурсивну функцію, яка приймає одновимірний масив зі 100 цілих чисел, заповнених випадковим чином,
і знаходить позицію, з якої починається послідовність з 10 чисел, сума яких мінімальна.
/*/
#include <iostream>
using namespace std;
#include <ctime>

void fillArray(int arr[], int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Sum(int arr[], int size, int start, int end, int &minSum, int &min)
{
    if (end - start < 10)
    {
        return;
    }
    int sum = 0;
    for (int i = start; i < start + 10; i++)
    {
        sum += arr[i];
    }
    if (sum < minSum)
    {
        minSum = sum;
        min = start;
    }
    Sum(arr, size, start + 1, end, minSum, min);
}
void main()
{
    const int size = 100;
    int arr[size];
    fillArray(arr, size);
    printArray(arr, size);
    int minSum = INT_MAX;
    int min = 0;
    Sum(arr, size, 0, size, minSum, min);
    cout << "Min sum: " << minSum << endl;
    cout << "Start position: " << min << endl;
}