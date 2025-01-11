/*/
Користувач вводить рядок. Визначити кількість літер,
кількість цифр і кількість інших символів, присутніх у рядку.
Рекомендації:
Для перевірки, що символ є числом, не обов'язково порівнювати його з усіма 10-ма цифрами,
достатньо порівняти код символу з діапазоном кодів цифр.
Код символу 0 - 48, 1 - 49, 2 - 50 .... 9 - 57.
/*/
#include <iostream>
#include <string>
using namespace std;

void countstuffs(char *str, int& letter, int& digitals, int& others)
{
    int length = strlen(str);
    for (int i = 0; i < length; i++){
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
        {
            letter++;
        }
        else if (str[i] >= 48 && str[i] <= 57)
        {
            digitals++;
        }
        else
        {
            others++;
        }
    }
}

void main()
{
  int letter = 0, digitals = 0, others = 0, length = 0;
    char str[999];
    cout << "Enter the string: ";
    cin.getline(str, 999);
    countstuffs(str, letter, digitals, others);
    cout << "Letters: " << letter << endl;
    cout << "Digitals: " << digitals << endl;
    cout << "Others: " << others << endl;
}