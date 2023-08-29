#include <iostream>
#include "wc.h"
#include <fstream>
#include <sstream>
using namespace std;



wcresult wc(const string& filename)
{
    wcresult resultado = {0,0,0};
    string line, words;
    ifstream in;
    in.open(filename);
    while(getline(in, line, '\n'))
    {
        resultado.bytes += line.length() + 1;
        resultado.lines ++;
        istringstream iss(line);
        while( iss >> words)
        {
            resultado.words++;
        }
    } 
        return resultado;
}

