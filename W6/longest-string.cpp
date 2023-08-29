#include <iostream>

using namespace std;

int size(const char* word)
{
    int size = 1;
    for(int i = 0; word[i] != '\0'; i++)
    {
        size++;
    }
    return size;
}

const char* longest(const char* pa[])
{
    const char* maior = pa[0];
    for (int i = 0; pa[i]!= nullptr;i++)
    {    

        if(size(pa[i])>= size(maior)) maior = pa[i];
    }
    return maior;


    

}


