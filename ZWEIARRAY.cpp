/*/
Написати програму, що виконує сортування одновимірного масиву цілих чисел методом бульбашкового сортування
/*/
#include <iostream>
using namespace std;

void bubble(const int* Bubbles)
{
    const  int size = 5;
    int array[size] = {Bubbles[0], Bubbles[1], Bubbles[2], Bubbles[3], Bubbles[4]};
    cout << "*****Array before*****" << endl;
    cout <<  array[0] << " . " <<  array[1] << " . " << array[2] << " . "<<  array[3] <<" . " << array[4] << endl;
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
    for (int index = 0; index < size; ++index)
    {
        cout <<  array[index] << " . ";
    }
}



void main()
{
    int Bubbles[5] = { 7, 12, 3, 1, 0 };
    bubble(Bubbles);
}