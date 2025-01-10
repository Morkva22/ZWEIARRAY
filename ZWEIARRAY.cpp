/*/
Написати функцію, яка видаляє з рядка всі входження в нього заданого символу.
/*/
#include <iostream>
#include <cstring>
using namespace std;

void deletesymbol(char *str, char symbol) {
    int lenght = strlen(str);
    int index = 0;
    for (int i = 0; i< lenght; i++)
    {
        if (str[i] != symbol)
        {
            str[index++] = str[i];
        }
    }
    str[index] = '\0';
}
void main()
{
    char str[] = "eeeeeeeheeeeeeeeoeelloe e eweeoeereeleed";
    char symbol = 'e';
    deletesymbol(str, symbol);
    cout << "modificated string: " << str << endl;
    
}