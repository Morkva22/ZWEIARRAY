/*/
Написати програму "довідник".
Створити два одновимірні масиви.
Один масив зберігає номери мобільних телефонів, другий — домашні телефонні номери.
Реалізувати меню для користувача:

Відсортувати за номерами мобільних;
Відсортувати за домашніми номерами телефонів;
Вивести список користувачів;
Вихід.
/*/
#include <iostream>
using namespace std;

void Users(const int* MobileArr, const int* HomeArr, const int size)
{
    cout << "*****List of Users*****" << endl;
    for (int i = 0; i <size; ++i)
    {
        cout << "~User " << i + 1 << "  ~Mobile Number --- "<< MobileArr[i] << ";" << "   ~Home Humber --- " << HomeArr[i]<< endl;
    }
}

void SortsMobileN(const int* MobileArr)
{
   const  int size = 5;
   int array[size] = {MobileArr[0], MobileArr[1], MobileArr[2], MobileArr[3], MobileArr[4]};
    cout << "*****Mobile numbers before*****" << endl;
    cout << " User 1 --- " << array[0] << "; " << "User 2 --- "<< array[1] << "; "<< "User 3 --- " << array[2] << "; "<< "User 4 --- " << array[3] <<"; " << "User 5 --- " << array[4] << endl;
    cout << endl;
    cout << "*****And after sorts*****" << endl;
    
    for (int startIndex = 0; startIndex < size - 1; ++startIndex)
    {
        int smallestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
        {
            if (array[currentIndex] < array[smallestIndex])
                    smallestIndex = currentIndex;
        }
        swap(array[startIndex], array[smallestIndex]);
    }
        cout <<  "User 5 --- "<< array[0] << "; "<< " User 2 --- " << array[1]<< "; "<< " User 4 --- " << array[2]<< "; "<< " User 4 --- " << array[3]<< "; "<< " User 1 --- " << array[4]<< endl;
}

void SortsHomeN(const int* HomeArr)
{
    const  int size = 5;
    int array[size] = {HomeArr[0], HomeArr[1], HomeArr[2], HomeArr[3], HomeArr[4]};
    cout << "*****Home numbers before*****" << endl;
    cout << " User 1 --- " << array[0] << "; " << "User 2 --- "<< array[1] << "; "<< "User 3 --- " << array[2] << "; "<< "User 4 --- " << array[3] <<"; " << "User 5 --- " << array[4] << endl;
    cout << endl;
    cout << "*****And after sorts*****" << endl;
    for (int startIndex = 0; startIndex < size - 1; ++startIndex)
    {
        int smallestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < size; ++currentIndex)
        {
            if (array[currentIndex] < array[smallestIndex])
                    smallestIndex = currentIndex;
        }
        swap(array[startIndex], array[smallestIndex]);
    }
        cout << " User 5 --- "<< array[0]<< "; " << " User 3 --- " << array[1]<< "; "<< " User 1 --- " << array[2]<< "; "<< " User 2 --- " << array[3]<< "; "<< " User 5 --- " << array[4]<< endl;
    
}

void menu(const int* MobileArr, const int* HomeArr)
{
    int choose = 0;
    cout << "Choose the option" << endl;
    cout << "1. Sort by mobile numbers" << endl;
    cout << "2. Sort by home numbers" << endl;
    cout << "3. List of users" << endl;
    cout << "4. Exit" << endl;
    cin >> choose;
    
    if (choose == 1)
    {
        
        SortsMobileN(MobileArr);
        cout << endl;
        cout << "Press '4' to exit in menu\t" << endl;
        cin>>choose;
        if (choose == 4)
        {
            menu(MobileArr, HomeArr);
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
            menu(MobileArr, HomeArr);
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
            menu(MobileArr, HomeArr);
        }
    }
    if (choose == 4)
    {
        cout << "bye bye" << endl;
    }
    else
    {
        cout << "Choose the correct option" << endl;
        cout <<endl << endl << endl;
        menu(MobileArr, HomeArr);
    }
}



void main()
{
    const int size = 5;
    int MobileArr[size] = {983378843,440989367, 983092165, 665627785, 381112237 };
    int HomeArr[size] = { 4332, 4338, 3627, 6261, 3477 };

    menu(MobileArr, HomeArr);
}