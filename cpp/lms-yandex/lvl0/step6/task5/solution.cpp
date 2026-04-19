#include <iostream>

using namespace std;

int main(){
    // Принимает на вход прописную букву и целочисленное значение для смещения. - DONE

    char symbolReg;
    int moveStep;

    cin >> symbolReg >> moveStep;

    // Вычисляет смещение для перевода в нижний регистр. - DONE

    char symbolProcessed = (int)symbolReg + moveStep;

    // Преобразует входную букву в *строчную*, используя вычисленное смещение. - DONE

    symbolProcessed = (int)symbolProcessed + 32;

    // Выводит итоговый символ команды.

    cout << "Итоговый символ команды: " << symbolProcessed;

    return 0;
}
