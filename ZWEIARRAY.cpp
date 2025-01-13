/*/
Написати рекурсивну функцію, яка обчислює суму всіх чисел у діапазоні від a до b.
Користувач вводить a і b. Проілюструйте роботу функції прикладом.
/*/
#include <iostream>
using namespace std;

void sum(int a, int b)
{
    if (a == b)
    {
        cout << a;
    }
    else
    {
        cout << a << " + ";
        sum(a + 1, b);
    }
}
void main()
{
    cout << "Enter a: ";
    int a;
    cin >> a;
    cout << "Enter b: ";
    int b;
    cin >> b;
    sum(a, b);
    cout << " = " << (a + b) * (b - a + 1) / 2;
    
}