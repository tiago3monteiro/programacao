#include <iostream>
#include <climits>
#include <map>
#include <list>
using namespace std;


string cat_keys(list<map<string, unsigned>> lst)
{
    map<string, unsigned> winnerMap;
    auto minimo = UINT_MAX;
    string winnerWord = "";
    for(auto mapa: lst)
    {
        for(auto par: mapa)
        {
            
            if(par.second < minimo)
            {
                minimo = par.second;
                winnerMap = mapa;
            }

        }

    }

    for(auto par: winnerMap)
    {
        winnerWord+= par.first;

    }
    return winnerWord;

}
