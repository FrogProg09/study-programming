#include <iostream>

using namespace std;

int main() {

    char symbolReg;
    int moveStep;
    cin >> symbolReg >> moveStep;

    if ( 32 <= (int)symbolReg && (int)symbolReg <= 126){

        char symbolProcessed;

        // looping back to 32th and so on symbol (126 - 32 = 95)
        if ((int)symbolReg + moveStep > 126) {
            symbolReg = (int)symbolReg - 95;
            symbolProcessed = (int)symbolReg + moveStep;
            symbolReg = (int)symbolReg + 95;
        }
        else{
            symbolProcessed = (int)symbolReg + moveStep;
        }

        cout << "Исходный символ: " << symbolReg << " (код: " << (int)symbolReg << ")\n";
        cout << "Новый символ: " << symbolProcessed << " (код: " << (int)symbolProcessed << ")\n";

        return 0;
    }
    return 1;
}
