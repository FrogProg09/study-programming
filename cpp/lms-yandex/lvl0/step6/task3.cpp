#include <iostream>

using namespace std;

int main(){
    // Запрашивает у пользователя символ (тип char),
    // который нужно зашифровать

    char symbolReg;
    cin >> symbolReg;

    // Запрашивает у пользователя целое число n -
    // величину сдвига.

    int moveStep;
    cin >> moveStep;

    // Вычисляет новый символ, сдвинутый на n позиций
    // вперёд в таблице ASCII.

    char symbolEncrypted = (int)symbolReg + moveStep;

    // Выводит исходный символ, его ASCII-код, новый
    // символ и его ASCII-код

    cout << "Исходный символ: " << symbolReg;
    cout << " (код: " << (int)symbolReg << ")\n";
    cout << "Новый символ: " << symbolEncrypted;
    cout << " (код: " << (int)symbolEncrypted << ")\n";

    return 0;
}
