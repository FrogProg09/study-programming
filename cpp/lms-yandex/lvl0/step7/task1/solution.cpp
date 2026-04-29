#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

    string nameFull, nameCode = "";

    getline(cin, nameFull);

    int length = nameFull.length();

    // nameCode += nameFull[0];
    // nameCode += "-";
    // nameCode += nameFull[length - 1];
    // nameCode += "-";
    // nameCode += length;

    cout << "Активация... Профиль создан.\n";
    cout << "Добро пожаловать, " << nameFull << "!\n";
    cout << "Ваш личный позывной: " << nameFull[0] << "-" << nameFull[length - 1] << "-" << length;
    return 0;
}
