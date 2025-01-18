/*/
Написати рекурсивну функцію знаходження найбільшого спільного дільника двох цілих чисел
/*/
#include <iostream>
using namespace std;

int cm(int a, int b) {
    if (b == 0)
        return a;
    return cm(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Your cm" << num1 << " and " << num2 << " is " << cm(num1, num2) << endl;

    return 0;
}