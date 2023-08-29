#include <iostream>
#include <map>
using namespace std;
void replace(const map<char, char> &r, string &s)
{
    for (char &c : s)
        for (auto mapa : r)
            if (c == mapa.first)
            {
                c = mapa.second;
                break;
            }
}
