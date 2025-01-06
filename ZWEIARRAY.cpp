/*/
Використовуючи покажчик на масив цілих чисел, змінити порядок проходження елементів масиву на протилежний.

/*/
#include <iostream>
using namespace std;
void main()
{
    const int size = 3;
    int arr[size] = {1,2,3};
    int *p = arr;
    cout << "Before: " <<  *p << endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"after " << *(p - i)<<endl;
        
    }
}