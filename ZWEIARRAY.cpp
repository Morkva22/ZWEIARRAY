/*/
Написати програму "успішність". Користувач вводить 10 оцінок студента. Реалізувати меню для користувача.

Виведення оцінок (виведення вмісту масиву);
Перескладання іспиту (користувач вводить номер елемента масиву і нову оцінку);
Чи виходить стипендія (стипендія виходить, якщо середній бал не нижче 10.7).
/*/
#include <iostream>
using namespace std;


void Retaking()
{
    
}



void menu(const int* marks[],const int* arr)
{
    int choose = 0;
    cout << "Choose the option" << endl;
    cout << "1. Show marks" << endl;
    cout << "2. Retaking the exam" << endl;
    cout << "3. Scholarship" << endl;
    cout << "4. Exit" << endl;
    cin >> choose;
    
    if (choose == 1)
    {
        
        for (int i = 0; i < 10; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Press '4' to exit in menu\t" << endl;
        cin>>choose;
        if (choose == 4)
        {
            menu(marks, arr);
        }
    }
    if (choose == 2)
    {
        SortsHomeN(HomeArr);
        cout  << endl;
        cout << "Press '4' to exit in menu\t" << endl;
        cin>>choose;
        if (choose == 4)
        {
            menu(marks, arr);
        }
    }
    if (choose == 3)
    {
        Users(MobileArr, HomeArr, 5);
        cout << endl;
        cout << "Press '4' to exit in menu\t" << endl;
        cin>>choose;
        if (choose == 4)
        {
            menu(marks, arr);
        }
    }
    if (choose == 4)
    {
        cout << "Bye Bye" << endl;
    }
    else
    {
        cout << "Choose the correct option" << endl;
    }
}


void main()
{
    int marks[10];
    int arr[marks]{9,7,10,8,12,11,9,6,11,11};
    
}