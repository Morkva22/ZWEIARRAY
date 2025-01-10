/*/
цію, яка вставляє в рядок у вказану позицію заданий символ
/*/
#include <iostream>
#include <cstring>
using namespace std;

void inputchar(char* str, char symbol, int pos)
{
    int lenght = strlen(str);
    if ( pos < 0 || pos > lenght )
    {
        cout << "Error" << endl;
        
    }
    for (int i = lenght; i >= pos; i--)
    {
        str[i+1] = str[i];
    }
    str[pos] = symbol;
}
void main()
{
    char str[999] = "whats up";
    char symbol = 'й';
    int pos = 3;
    inputchar(str, symbol, pos);
    cout <<"modificated string: " << str << endl;
    
}