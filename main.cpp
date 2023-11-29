#include <iostream>
using namespace std;

void DigitCountSum(int K, int& C, int& S) {
    C = 0; // Ініціалізуємо кількість цифр як 0
    S = 0; // Ініціалізуємо суму цифр як 0

    while (K > 0) {
        int digit = K % 10; // Отримуємо останню цифру числа
        S += digit; // Додаємо цифру до суми
        C++; // Збільшуємо лічильник цифр
        K /= 10; // Видаляємо останню цифру числа
    }
}

bool areDigitsUnique(int number) {
    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int units = number % 10;

    return (hundreds != tens) && (hundreds != units) && (tens != units);
}

int main() {
    int numbers[] = { 123, 4567, 89012, 34, 56789 };

    for (int i = 0; i < 5; ++i) {
        int K = numbers[i];
        int C, S;

        DigitCountSum(K, C, S);

        cout << "Number: " << K << endl;
        cout << "Count of digits: " << C << endl;
        cout << "Sum of digits: " << S << endl;
        cout << endl;
    }

    int N;
    cout << "Введіть кількість секунд, що пройшли з початку доби: ";
    cin >> N;

    int secondsPassed = N % 60; // Кількість секунд, що пройшли з початку поточної хвилини

    cout << "Кількість секунд з початку останньої хвилини: " << secondsPassed << endl;

    int inputNumber;
    cout << "Введіть тризначне число: ";
    cin >> inputNumber;

    if (areDigitsUnique(inputNumber)) {
        cout << "Всі цифри даного числа різні." << endl;
    } else {
        cout << "Не всі цифри даного числа різні." << endl;
    }

    return 0;
}