#include <iostream>

using namespace std;

int main(){
    // Запрашивает у пользователя символ (тип char) —
    // букву английского алфавита в нижнем регистре
    // (от a до z).

    char symbolReg;
    cin >> symbolReg;

    // Преобразует эту букву в прописную, используя
    // сдвиг на 32 в таблице ASCII.

    char symbolProcessed = (int)symbolReg - 32;

    // Выводит исходный символ и преобразованный символ

    cout << "Исходный символ: " << symbolReg << endl;
    cout << "Преобразованный символ: " << symbolProcessed;

    return 0;
}
