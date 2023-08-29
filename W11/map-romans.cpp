#include <iostream>
#include <vector>

using namespace std;

unsigned convert (char letter)
{
    switch(letter){
        case 'M':
            return 1000;
        case 'D':
            return 500;
        case 'C':
            return 100;
        case 'L':
            return 50;
        case 'X':
            return 10;
        case 'V':
            return 5;
        case 'I':
            return 1;
        default:
            return 0;
    }
}

unsigned roman_to_arab(const string& roman)
{
    vector <unsigned> arabe;
    unsigned res = 0;
    for( size_t i = 0; i < roman.size(); i++)
    {
        arabe.push_back(convert(roman[i]));

    }
    for (size_t i = 0; i < arabe.size() -1; i++)
    {
        if (arabe[i] < arabe[i+1]) res -= arabe[i];
        else res+= arabe[i];
    }
    res += arabe[arabe.size() -1];
    return res;

}

int main()
{
    { string r = "XV"; cout << roman_to_arab(r) << '\n'; }
    { string r = "LXXXIV"; cout << roman_to_arab(r) << '\n'; }
    { string r = "CMLXIV"; cout << roman_to_arab(r) << '\n'; }
    { string r = "MMMCMXCIX"; cout << roman_to_arab(r) << '\n'; }
    { string r = "MMMDCCCLXXXVIII"; cout << roman_to_arab(r) << '\n'; }
    return 0;


}