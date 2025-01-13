/*/
Написати рекурсивну функцію,яка виводить N зірок у ряд,
число N задає користувач. Проілюструйте роботу функції прикладом.
/*/
#include <iostream>
using namespace std;
void star(int n) {
    if (n == 0) {
        return;
    }
    cout << "*";
    star(n - 1);
}

int main() {
    int n;
    cout << "Enter the number of stars: ";
    cin >> n;
    star(n);
}