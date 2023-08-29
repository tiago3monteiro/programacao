#include <iostream>

using namespace std;


 bool pangram(const char s[], char m[])
 {

    bool teste[26] = {false};

    for (int i = 0; s[i] != '\0'; i++)
    {   
        
        if (int(s[i])>96 && int(s[i]<123)) //lower
        {
            
            teste[int(s[i])-97] = true;

        }
        else if (int(s[i])>64 && int(s[i]<91)) //upper
        {
            
            teste[int(s[i])-65] = true;

        }

    }
    int j = 0;

    for (int i = 0; i < 26; i++)
    {
        
        if(teste[i] == false)
        {
            m[j] = int(97+i);
            
            j++;
        }


    }
    m[j] = '\0';
    if (j == 0) return true; 
    return false;
    
 }
