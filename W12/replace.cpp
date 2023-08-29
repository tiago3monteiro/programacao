#include <iostream>
#include <map>

using namespace std;

void replace(const map<char, char>& r, string& s)

{
    
    for(auto p = r.begin(); p != r.end(); p++)
    {
        for(auto& character: s)
        {
            if(character == p->first) character = p->second;
        }
    }
}

