/*/
Використовуючи два покажчики на масив цілих чисел, скопіювати один масив в інший.
Використовувати в програмі арифметику покажчиків для просування масивом, а також оператор розіменування.
/*/
#include <iostream>
using namespace std;
void main()
{
    const int SIZE =3;
    int arr1[SIZE] = {1, 2, 3};
    int arr2[SIZE];
    int *p1 = arr1;
    int *p2 = arr2;
    cout<< "Array 1: " << *p1 <<" "<< *(p1+1) << " "<< *(p1+2) << endl;
    cout<< "Array 2: " << *p2 <<" "<< *(p2+1) << " "<< *(p2+2) << endl;
    cout << "lets copy it!"<< endl;
    for (int i = 0; i< SIZE; i++)
    {
        *p2 = *p1;
        p1++;
        p2++;
    }
    p1 = arr1;
    p2 = arr2;
    cout << "Array 2: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << *p2 << " ";
        p2++;
    }
}