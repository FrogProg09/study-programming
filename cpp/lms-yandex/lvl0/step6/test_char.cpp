// standard input/output library.
#include <iostream>
// lib for setting up a language locale (displaying russian correctly)
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    // wchar_t emojiHappy= L'😛';
    // wchar_t russianLetter = L'Ы';
    // wchar_t emojiUnknown = wchar_t((int)emojiHappy +3);
    // wcout << L"Вот буква: " << russianLetter << endl;
    // wcout << L"Вот следующая буква: " << wchar_t((int)russianLetter +1) << endl;
    // wcout << L"Вот эмодзи: " << emojiHappy << endl;
    // wcout << L"Вот следующее эмодзи: " << emojiUnknown << endl;

    wchar_t emoji = L'😛';
    wcout << L"Вот эмоджи: " << emoji << endl;
    wcout << L"А вот эмоджи котороый идет за превым: " << wchar_t((int)emoji +1) << endl;

    return 0;
}
