#include <iostream>

using namespace std;

void shift(char s[], int first, int last )
{
    for (int i = first; i <= last; i++) {
        s[i - first] = s[i];
    }

    s[last - first + 1] = '\0';
}


 

void trim(char s[])
{
    int size = 0, i = 0;
    while (s[i] != '\0')
    {
        size ++;
        i++;
    }

    int first = 0, last = size-1 ;
    
    while (first <= last && isspace(s[first])) {
        first++;
        
    }
    

    while (last >= first && isspace(s[last])) {
        last--;
    
    }
    
    shift (s,first, last);
    
}


