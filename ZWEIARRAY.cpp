/*/
Користувач вводить рядок символів і шуканий символ.
Порахувати скільки разів він зустрічається в рядку.
/*/
#include <iostream>
#include <cstring>
using namespace std;

void charsearch(const char *str, int &n, char &g) {
    n = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == g) {
            n++;
        }
    }
}
int main() {
    int n;
    char g;
    char str[999];
    cout << "Enter string: ";
    cin.getline(str, 999);
    cout << "And what symbol do you need? ";
    cin >> g;
    charsearch(str, n, g);
    cout << "The symbol '" << g << "' found " << n << " times" << endl;
}