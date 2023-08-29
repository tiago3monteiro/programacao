#include <iostream>
#include "print_array.h"

using namespace std;

void merge_arrays(const int a[], int na, const int b[], int nb, int c[])
{
    int i = 0, j = 0;
    int ultimo = na + nb -1;
    while ((i + j) <= ultimo)
    {
        
        if (i == na)
        {
            while (j != nb)
            {
                c[i + j] = b[j];
                j++;
                
            }
            break;
        }

        if (j == nb)
        {
            while (i != na)
            {
                c[i+j] = a[i];
                i++;
                
            }
            break;
        }
        if (a[i] < b[j])
        {
            c[i+j] = a[i];
            i++;
            
        }
        else
        {
            c[i+j] = b[j];
            j++;
        
        }
    
    }
}

