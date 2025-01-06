/*/
Використовуючи два покажчики на масиви цілих чисел, скопіювати один масив в інший так,
щоб у другому масиві елементи перебували у зворотному порядку.
/*/
#include <iostream>
using namespace std;
void main()
{
    const int size = 3;
    int arr[size] = {1,2,3};
    int *pr = arr;
    cout << "Before: " <<  *pr <<" "<<  *(pr+1) <<" "<<  *(pr + 2) << endl;
    cout << "after ";
    for (int i = 0; i < size; i++)
    {
        cout <<  *(pr + size - i - 1) << " ";
    }
}