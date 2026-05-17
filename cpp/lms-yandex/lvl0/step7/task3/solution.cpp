#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

    string speciesOne, speciesTwo;
    cin >> speciesOne >> speciesTwo;

    string speciesFinal;
    speciesFinal += speciesOne[speciesOne.length() / 2];
    speciesFinal += speciesTwo[speciesTwo.length() % 2];

    cout << speciesFinal;
    return 0;
}
