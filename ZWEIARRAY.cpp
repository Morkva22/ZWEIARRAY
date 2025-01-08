/*/
Дано рядок символів. Замінити в ньому всі пробіли на табуляції.
/*/
#include <iostream>
using namespace std;
void main()
{
    char string[] = "Str ing wi th wo rds\0";
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == ' ')
        {
            string[i] = '\t';
        }
    }
    cout << string << endl;
}