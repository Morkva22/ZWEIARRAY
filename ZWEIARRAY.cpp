/*/
Написати рекурсивну функцію знаходження ступеня числа.
/*/
#include <iostream>
using namespace std;

int power(int a, int n)
{
    if (n == 0)
        return 1;
    return a * power(a, n - 1);
}
void main()
{
    int a, n;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter n: ";
    cin >> n;
    cout << a << "^" << n << " = " << power(a, n) << endl;
}