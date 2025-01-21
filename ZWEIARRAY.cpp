/*/
Написати програму "успішність". Користувач вводить 10 оцінок студента. Реалізувати меню для користувача.

Виведення оцінок (виведення вмісту масиву);
Перескладання іспиту (користувач вводить номер елемента масиву і нову оцінку);
Чи виходить стипендія (стипендія виходить, якщо середній бал не нижче 10.7).
/*/
#include <iostream>
using namespace std;



void ShowArray(int* arr, int marks) {
    for (int i = 0; i < marks; i++) {
        cout << arr[i] << " ";
    }
}

void pop_back(int *&arr, int &marks, int index) {	
    int *NewArray = new int[marks-1];
    for (int i = 0; i < marks; i++) {
        if (i < index) {
            NewArray[i] = arr[i];
        }
        if (i > index) {
            NewArray[i-1] = arr[i];
        }
    }
    delete[] arr;
    marks--;
    arr = NewArray;
}


void push_back(int *&arr, int &marks, int value, int index) {
    int *NewArray = new int[marks+1];
    for (int i = 0; i <= marks; i++) {
        if (i < index) {
            NewArray[i] = arr[i];
        }
        if (i == index) {
            NewArray[i] = value;
        }
        if (i > index) {
            NewArray[i] = arr[i - 1];
        }
    }
    marks++;
    delete[] arr;
    arr = NewArray;
}


void Scholarship(int* arr, int marks)
{
    int sum = 0;
    for (int i = 0; i < marks; i++)
    {
        sum += arr[i];
    }
    if (sum / marks >= 10.7)
    {
        cout  << "\tHe have a scholarship" << endl;
    }
    else
    {
        cout << "\tHe dont have a scholarship(" << endl;
    }
}


void menu(int marks, int* arr)
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
        
        ShowArray(arr,marks);
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
        int value, index;
        ShowArray(arr, marks);
        cout<<endl;
        cout << "Name the index of the mark what need to clear(start count with 0)" << endl;
        cin >> index;
        pop_back(arr, marks, index);
        cout << "\n";
        cout << "and the new mark" << endl;
        cin >> value;
        cout  << endl;
        push_back(arr, marks, value, index);
        ShowArray(arr, marks);
        cout<<endl;
        cout << "Press '4' to exit in menu\t" << endl;
        cin>>choose;
        if (choose == 4)
        {
            menu(marks, arr);
        }
    }
    if (choose == 3)
    {
        Scholarship(arr, marks);
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
        cout <<endl << endl << endl;
        menu(marks, arr);
    }
}


void main()
{
    int marks=10;;
    int* arr = new int [marks]{9,7,10,8,12,11,9,6,11,11};
    
menu(marks, arr);
    
    delete[] arr;
}


