/*/Використовуючи покажчики та оператор розіменування, визначити знак числа, введеного з клавіатури
/*/
#include <iostream>
using namespace std;
void main()
{
    int a;
    cout<<"Enter a number: ";
    cin >> a;
    int *pa = &a;
    if (*pa > 0)
    {
        cout << "+";
    }
    else if(*pa<0)
    {
        cout << "-";
        }
        else if (*pa ==0)
        {
            cout<< " it is ABSOLUT ZERO...";
        }
    
}