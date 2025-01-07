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

void push_back(int *&arr, int &size, const int value, int index) {
    int *NewArray = new int[size+1];
    for (int i = 0; i <= size; i++) {
        if (i < index) {
            NewArray[i] = arr[i];
        }
        if (i == index) {
            NewArray[i] = value;
        }
        if (i > index) {
            NewArray[i] = arr[i - 1];
        }
    }
    size++;
    delete[] arr;
    arr = NewArray;
}

void pop_back(int *&arr, int &size, int index) {	
    int *NewArray = new int[size-1];
    for (int i = 0; i < size; i++) {
        if (i < index) {
            NewArray[i] = arr[i];
        }
        if (i > index) {
            NewArray[i-1] = arr[i];
        }
    }
    delete[] arr;
    size--;
    arr = NewArray;
}
void push_in(int *&arr, int &size, const int value)
{
    int *newArray = new int[size + 1];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = arr[i];
    }
    newArray[size++] = value;
 
    delete[] arr;
    arr = newArray;
}
int main()
{
    int size = 5;
    int *arr = nullptr;

    
    memory_allocated(arr, size);//// vydelenie pamyati
    initialized_array(arr, size);/// inicializaciya
    ShowArray(arr, size); ///vivod
    cout << endl;


    
    push_back(arr, size, 10); ///v kinez
    ShowArray(arr, size);///vivod
    cout << endl;


    
    push_back(arr, size, 20, 2);///vstavka
    ShowArray(arr, size);///vivod
    cout << endl;


    
    pop_back(arr, size, 2);///udalenie
    ShowArray(arr, size);///vivod
    cout << endl;


    
    Delete_array(arr);///udalenie massiva
}



