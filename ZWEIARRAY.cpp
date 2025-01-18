/*/
Написати гру "Бики та корови".
Програма "загадує" чотирицифрове число і
гравець повинен вгадати його.
Після введення користувачем числа програма повідомляє,
скільки цифр числа вгадано (бики) і
скільки цифр вгадано і стоїть на потрібному місці (корови).
Після відгадування числа на екран необхідно вивести
кількість зроблених користувачем спроб.
У програмі необхідно використовувати рекурсію.

/*/
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

void generateNumber(string& number) {
    srand(time(0));
    number = to_string(rand() % 9000 + 1000);
}

void BullsAndCows(const string& guess, const string& secret, int& bulls, int& cows) {
    bulls = cows = 0;
    for (int i = 0; i < 4; ++i) {
        if (guess[i] == secret[i]) {
            ++bulls;
        } else if (secret.find(guess[i]) != string::npos) {
            ++cows;
        }
    }
}

void playGame(const string& secret, int attempts) {
    string guess;
    cout << "Enter your guess: ";
    cin >> guess;

    int bulls, cows;
    BullsAndCows(guess, secret, bulls, cows);

    if (bulls == 4) {
        cout << "Congratulations! You guessed the number in " << attempts << " attempts" << endl;
    } else {
        cout << "Bulls: " << bulls << ", Cows: " << cows << endl;
        playGame(secret, attempts + 1);
    }
}

int main() {
    string secret;
    generateNumber(secret);
    cout << "Welcome to the game Bulls and Cows!" << endl;
    playGame(secret, 1);
    return 0;
}