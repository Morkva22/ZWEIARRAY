/*/
Підрахувати кількість слів у введеному реченні.
/*/
#include <iostream>
using namespace std;


int countsymbols(const char *str)
{
    int count = 0;
    while (str[count]!= '\0')
    {
        count++;
    }
    return count;
}

void main()
{
   const char *str = "Schwerer Panzerspähwagen Sonderkraftfahrzeug 234";
    cout << countsymbols(str) << endl;
}

