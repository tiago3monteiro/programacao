#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;


int count(const string& fname, const string& word)
{
    string copy = word;
    int counter = 0;
    ifstream in(fname);
    string linha;
    while(getline(in, linha))
    {
        istringstream words(linha);
        string res;
        while( words >> res)
        {
            for(char& c : res) c = toupper(c);
            for(char& c : copy) c = toupper(c);
            if(res == copy) counter++;

        }
    }
    return counter;

}
