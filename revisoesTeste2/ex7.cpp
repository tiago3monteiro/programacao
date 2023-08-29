#include "wc.h"

using namespace std;

wcresult wc(const string& filename)
{
    wcresult res = {0,0,0};
    ifstream in(filename);
    string linhas;
    while(getline(in,linhas))
    {
        res.lines++;
        res.bytes += linhas.length() + 1;

        istringstream words(linhas);
        string word;
        while(words >> word)
        {
            res.words++;
            
        }

    }
    return res;
}

