/*/
Написати функцію, яка сортує першу половину масиву за спаданням,
а другу — за зростанням, використовуючи сортування простими вставками.
/*/
#include <iostream>
using namespace std;



void sort( int arr[], int size, bool flag = false, int size1 = 5, int size2 = 5){
    
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
    for (int i = 0; i < size1; i++)
    {
        cout << arr[i] << " ";
    }
}

void main()
{
    const int size = 10;
    const int size1 = 5;
    const int size2 = 5;
    int arr2[]{1,2,3,4,5};
    int arr1[]{6,7,8,9,10};
    int arr[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    sort(arr, size, true, size1, size2);
    sort(arr, size, false, size1, size2);
    cout << endl;
    
}