/*/
Написати такі функції для роботи з динамічним масивом:

Функція розподілу динамічної пам'яті.
Функція ініціалізації динамічного масиву.
Функція друку динамічного масиву.
Функція видалення динамічного масиву.
Функція додавання елемента в кінець масиву.
Функція вставки елемента за вказаним індексом.
Функція видалення елемента за вказаним індексом.
/*/
#include <iostream>
using namespace std;


void memory_allocated(int *&arr , int size)
{
    arr = new int[size];
}

void initialized_array(int *arr, int size)
{
    for (int i = 0; i<size; i++)
    {
        arr[i] = 0;
    }
}
void ShowArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void Delete_array(int *&arr)
{
    delete[] arr;
    arr = nullptr;
}
