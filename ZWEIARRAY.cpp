/*/
написати функцію, що визначає середнє арифметичне елементів переданого їй масиву.
/*/
#include <iostream>
using namespace std;

void avarage(int arr[], int size)
{
    int sum  = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "Avarage: " << sum / size << endl;
    
}
void main()
{
    int arr[] = {1, 2, 3, 4, 5};
    avarage(arr, 5);
}