/*/
Дано рядок символів. Визначити кількість літер, цифр та інших символів, присутніх у рядку.
/*/
#include <iostream>
#include <cstring>
using namespace std;

void countSymbols(const char *str, int &letters, int &numbers, int &others) {
     letters = 0;
     numbers = 0;
     others = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            letters++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            numbers++;
        } else {
            others++;
        }
    }
}

int main() {
    const char *str = "hello 228!)) . . .";
    int letters, numbers, others;
    countSymbols(str, letters, numbers, others);

    cout << "Letters: " << letters << endl;
    cout << "Numbers: " << numbers << endl;
    cout << "Others: " << others << endl;

    return 0;
}