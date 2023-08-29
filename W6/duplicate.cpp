#include <iostream>

using namespace std;


char* duplicate(const char s[]) 
{   
    int size = 1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        size++;
    }
    
     char* dup = new char[size];

    for (int i = 0; i < size-1; i++)
    {
        *(dup+i) = s[i];

    }
    *(dup+size-1) = '\0';
 
    return dup;
    
}
