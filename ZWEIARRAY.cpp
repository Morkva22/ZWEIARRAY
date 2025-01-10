/*/
Написати функцію, яка видаляє з рядка символ із заданим номером.
/*/
#include <iostream>
using namespace std;

void Char_Delete(char *str, int n)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (i == n)
        {
            for (int j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
        }
        i++;
    }
}

void main()
{
    char str[999];
    int n;
    cout << "Enter string: ";
    cin >> str;
    cout << "Enter number of symbol: ";
    cin >> n;
    Char_Delete(str, n);
    cout << "Result: " << str << endl;
}