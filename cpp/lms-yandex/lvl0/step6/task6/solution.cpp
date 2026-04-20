#include <iostream>
#include <cmath>

using namespace std;

int main(){
    char symbolRegBeg, symbolRegEnd;
    cin >> symbolRegBeg >> symbolRegEnd;

    // Дистанция: Количество шагов по таблице ASCII, которое разделяет эти два символа.

    int distanceUnprocessed = (int)symbolRegEnd - (int)symbolRegBeg;
    int distance = abs(distanceUnprocessed);

    // Центральный символ: Символ, который находится ровно посередине между начальным и конечным.

    char symbolMiddle = ((int)symbolRegBeg + (int)symbolRegEnd) /  2;

    // Вывод

    cout << "Начальный символ: " << symbolRegBeg << endl;
    cout << "Конечный символ: " << symbolRegEnd << endl;
    cout << "---\n";
    cout << "Центральный символ: " << symbolMiddle << endl;
    cout << "Дистанция: " << distance << endl;

    return 0;
}
