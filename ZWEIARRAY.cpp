/*/
Необхідно відсортувати перші дві третини масиву в порядку зростання,
якщо середнє арифметичне всіх елементів більше нуля; в разі — лише першу третину.
Іншу частину масиву не сортувати, а розташувати у зворотному порядку.

/*/
#include <iostream>
using namespace std;


void bubble(const int* Bubbles)
{
    const  int size = 6;
    int array[size] = {Bubbles[0], Bubbles[1], Bubbles[2], Bubbles[3], Bubbles[4], Bubbles[5]};
    cout << "*****Array before*****" << endl;
    cout <<  array[0] << " . " <<  array[1] << " . " << array[2] << " . "<<  array[3] <<  " . "<<  array[4] << " . "<<  array[5] << endl;
    cout << endl;
    cout << "*****Array after*****" << endl;
    
    for (int startIndex = 0; startIndex < size - 1; ++startIndex)
    {
        int smallestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
        {
            if (array[currentIndex] < array[smallestIndex])
                smallestIndex = currentIndex;
        }
        swap(array[startIndex], array[smallestIndex]);
    }
    for (int index = 0; index < 4; ++index)
    {
        cout <<  array[index] << " . ";
    }
    cout << array[5]<< " , " << array[4] << endl;
}



void bubble3(const int* Bubbles)
{
    const  int size = 2;
    int array[size] = {Bubbles[0], Bubbles[1]};
    for (int startIndex = 0; startIndex < size - 1; ++startIndex)
    {
        int smallestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
        {
            if (array[currentIndex] < array[smallestIndex])
                smallestIndex = currentIndex;
        }
        swap(array[startIndex], array[smallestIndex]);
    }
    for (int index = 0; index < size; ++index)
    {
        cout <<  array[index] << " . ";
    }
}


void main()
{
    int arr[6] = { 14, 72, -93, 11, -90, 5};
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        sum += arr[i];
    }
    if (sum > 0)
    {
        bubble(arr);
    }
    else
    {
        cout << "*****Array before*****" << endl;
        cout << arr[0] << " . " << arr[1] << " . " << arr[2] << " . " << arr[3] << " . " << arr[4] << " . " << arr[5] <<endl;
        cout << endl;
        cout << "*****Array after*****" << endl;
        bubble3(arr);
        cout  << arr[5] << " . " << arr[4] << " . " << arr[3] <<" . " << arr[2] <<endl;
    }
}