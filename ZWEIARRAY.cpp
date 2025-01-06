#include <iostream>
using namespace std;
void main()
{
    int a,b;
    cout << "enter 2 numbd " << endl;
    cin >> a;
    cin >> b;
    
    int *pa = &a;
    int *pb = &b;
    
    if (*pa > *pb)
    {
        cout << "this numb be the larger " << *pa<<  endl;
    } else
        {
        cout << "this numb be the larger " << *pb<< endl;
        }
    
}