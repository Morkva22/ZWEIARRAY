/*/
Створіть двовимірний масив.
Заповніть його випадковими числами та покажіть на екран.
Користувач обирає кількість зсувів і положення (ліворуч, праворуч, вгору, вниз).
Виконати зсув масиву і показати на екран отриманий результат. Зсув циклічний.
Наприклад, якщо ми маємо такий масив:

1 2 0 4 5 3

4 5 3 9 0 1

і користувач вибрав зсув на 2 розряди вправо, то ми отримаємо:

5 3 1 2 0 4

0 1 4 5 3 9


/*/
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    const int ROWS = 2;
    const int COLS = 5;
    int arr[ROWS][COLS];
    srand(time(0));
    for (int i = 0; i < ROWS; i++) {
        for (int m = 0; m < COLS; m++) {
            arr[i][m] = rand() % 6;
            cout << arr[i][m] << " ";
        }
        cout << endl;
    }
    int retreat;
    cout << "input the number of retreat: 1 - SHIFT UP 2 - SHIFT DOWN 3 - SHIFT LEFT 4 - SHIFT RIGHT" << endl;
    cin >> retreat;

    if (retreat == 1)
    {
        //up
        for (int m = 0; m < COLS; m++)
        {
            int pro = arr[0][m];
            arr[0][m] = arr[1][m];
            arr[1][m] = pro;
        }
    }
        //dauwn
        else if (retreat == 2)
        {
            for (int n = 0; n  < COLS; n++)
            {
                int pro = arr[0][n];
                arr[0][n] = arr[1][n];
                arr[1][n] = pro;
            }
        }
        //left
    else if (retreat == 3)
    {
        for (int  h = 0; h < ROWS; h++)
        {
            int pro =  arr[h][0];
            for (int i = 0; i < COLS - 1; i++)
            {
                arr[h][i] = arr[h][i + 1];
            }
            arr[h][COLS - 1] = pro;
        }
    }
        //right
    else if( retreat == 4)
    {
        for (int j = 0; j < ROWS; j++)
        {
            int pro = arr[j][COLS - 1];
            for (int i = COLS - 1; i > 0; i--)
            {
                arr[j][i] = arr[j][i - 1];
            }
            arr[j][0] = pro;
        }
    }
    
    for (int i = 0; i < ROWS; i++)
    {
        for (int m = 0; m < COLS; m++) {
            cout << arr[i][m] << " ";
        }
        cout << endl;
    }
}