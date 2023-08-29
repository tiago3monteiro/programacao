#include <iostream>

using namespace std;

int main()
{
    char caracter;
    cin >> caracter;
    if (int(caracter) > 47 && int(caracter) < 58) cout << "DIGIT";
    else if (int(caracter) > 64 && int(caracter) < 91) cout << "LETTER";
    else if (int(caracter) > 96 && int(caracter) < 123) cout << "LETTER";
    else cout << "OTHER";
    return 0;
}