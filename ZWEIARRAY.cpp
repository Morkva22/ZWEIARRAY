/*/
Дано рядок символів. Необхідно перевірити чи є цей рядок паліндромом.
/*/
#include <iostream>
#include <string>
using namespace std;

bool Palidrom(const string &str)
{
    int left = 0;
    int right = str.length() - 1;
    while (left < right)
    {
        if ( str[left] != str[right])
        {
            return false;
            
        }
        left ++;
        right--;
    }
    return true;
}
int main()
{
    string index;
    cout << "Enter string: ";
    cin >> index;

    if (Palidrom(index))
    {
        cout << "This string is a palidrom" << endl;
    }
    else
    {
        cout << "This string is not a palidrom" << endl;
    }
}