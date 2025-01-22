/*/
Написати програму, що виконує сортування одновимірного масиву цілих чисел методом швидкого пошуку.
/*/
#include <iostream>
using namespace std;


void QuickSort (int Array[], int N, int L, int R) 
{
    int iter = L , 
        jter = R ;
    
    int middle = (R+L)/2 ;
    
    int x = Array [middle] ;
    int w ;
    
    do
    {
        while (Array[iter]<x)
        { iter ++; }

        while (x<Array[jter])
        { jter --; }

        if (iter<=jter) 
        {
            w = Array [iter]; 
            Array [iter] = Array [jter] ;
            Array [jter] = w ;
           
            iter ++ ;
            jter -- ;
        }
    }
    while (iter<jter) ;
    
    if (L<jter) 
    { QuickSort (Array, N, L, jter) ; }
    
    if (iter<R)
    { QuickSort (Array, N, iter, R) ; }
}

int main()
{
    int* Array;
    int N;
    cout << "Enter the number of elements in the array: ";
    cin >> N;
    Array = new int[N];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < N; i++)
    {
        cin >> Array[i];
    }
    QuickSort (Array, N, 0, N-1) ;
    cout << "Sorted array: ";
    for (int i = 0; i < N; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
    
}