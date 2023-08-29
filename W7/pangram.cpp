#include <iostream>
#include <cstring>

using namespace std;

bool pangram(const string &s, string &m)
{
     bool teste[26] = {false};
    
    for (int i = 0; i < int(s.length()); i++)
    {   
        
        if (s[i] >= 'a' && s[i] <= 'z') teste[int(s[i])-97] = true;
    
        else if (s[i] >= 'A' && s[i] <= 'Z') teste[int(s[i])-65] = true;
        
    }


    for (int i = 0; i < 26; i++)
    {
        if(teste[i] == false)
        {
            m.push_back(int(97+i));
        }
    }
    if ( !int(m.length())) return true; 
    return false;
    
 }

