#include <iostream>

using namespace std;

int main(){
    char symbolRegBeg, symbolRegEnd;
    cin >> symbolRegBeg >> symbolRegEnd;

    // Дистанция: Количество шагов по таблице ASCII, которое разделяет эти два символа.

    int distance = (int)symbolRegEnd - (int)symbolRegBeg;

    // Центральный символ: Символ, который находится ровно посередине между начальным и конечным.

    int middle = distance /  2;
    char symbolMiddle = (int)symbolRegBeg + middle;

    // Вывод

    cout << "Начальный символ: " << symbolRegBeg << endl;
    cout << "Конечный символ: " << symbolRegEnd << endl;
    cout << "---\n";
    cout << "Центральный символ: " << symbolMiddle << endl;
    cout << "Дистанция: " << distance << endl;

    return 0;
}
