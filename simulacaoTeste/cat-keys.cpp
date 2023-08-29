#include <iostream>
#include <list>
#include <map>
#include<climits>

using namespace std;

string cat_keys(list<map<string, unsigned>> lst)
{
    unsigned minimo = UINT_MAX;
    string res = "";
    bool control = false;
    string newString; 

    for (auto mapa: lst)
    {
        newString = "";
        for(auto val: mapa)
        {
            newString+=val.first;
            if(val.second < minimo) 
            {
                control = true; 
                minimo = val.second;
            }
        }

        if (control) res = newString;
        control = false;
    }

    return res;
}

