#include <iostream>
#include <vector>

using namespace std;

bool pangram(const string& s, string& m)
{
    bool resultado = true;
    vector<bool> usadas (26, false);    
    for(char caracter: s)
    {
        int current = tolower(caracter) - 'a';
        if (isalpha(caracter) && !usadas[current])
        {
            usadas[current] = true;
        }


    }
    for(size_t i = 0; i < 26;  i++)
    {
        if (!usadas[i])
        { 
            m += char(i+97);
            resultado = false;
        }

    }

   
    return resultado;
}

