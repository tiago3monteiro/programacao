#include <iostream>

using namespace std;

char* repeat(const char str[], int n)
{
    int size = 0;
    for (int i = 0; str[i] != '\0';i++) size++;
    char* temp = new char[n*size+1]; //alocar -->heap para n * o tamanho da  + '\0'
    *(temp+(n*size)) = '\0';
    int j = 0;
    for(int i = 0; *(temp+i)!= '\0'; i++)
    {   
        if (j == size) j = 0;
        *(temp+i) = str[j];
        j++;

    }
    
    return temp;
}



