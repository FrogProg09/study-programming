#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

    // format of commandNameCompressed: City_Name
    string commandNameCompressed;
    cin >> commandNameCompressed;

    char breakPoint = commandNameCompressed.find("_");

    // format of commandNameReg: Name (without City_)
    string commandNameReg = commandNameCompressed.substr(breakPoint + 1, 700);
    cout << commandNameReg << "! " << commandNameReg << "! Go!\n";
    return 0;
}
