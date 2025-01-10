/*/
Написати програму, яка замінює всі символи крапки "."
у рядку, введеному користувачем, на символи знака оклику "!".
/*/
#include <iostream>
using namespace std;

void switchdots (char *str, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '.')
        {
            str[i] = '!';
        }
    }
}


void main()
{
    int n;
    cout << "Enter string with dotas: ";
    char str[999];
    cin >> str;
    n = strlen(str);
    switchdots(str, n);
    cout << "String with '.' was replaced by '!' : " << str << endl;
}