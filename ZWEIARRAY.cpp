/*/
Дано масив чисел розмірністю 10 елементів.
Написати функцію, яка сортує масив за зростанням або за спаданням, залежно від третього параметра функції.
Якщо він дорівнює true, сортування йде за спаданням, якщо false — за зростанням.
Перші 2 параметри функції — це масив і його розмір, третій параметр за замовчуванням дорівнює false.
/*/
#include <iostream>
using namespace std;



void sort( int arr[], int size, bool flag = false){
    for (int i = 0; i< size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (flag)
            {
                int pro;
                if (arr[i] > arr[j])
                {
                    pro = arr[i];
                    arr[i] = arr[j];
                    arr[j] = pro;
                }
            }
            else
            {
                int pro;
                if (arr[i] < arr[j])
                {
                    pro = arr[i];
                    arr[i] = arr[j];
                    arr[j] = pro;
                }
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void main()
{
    const int size = 10;
    int arr[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    sort(arr, size, false);
    cout << endl;
    sort(arr, size, true);
    cout << endl;
    
}