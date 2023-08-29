#include <iostream>
#include "print_array.h"

using namespace std;

int *merge_arrays(const int a[], int na, const int b[], int nb)
{
    int *c = new int[na+nb];
    int i = 0, j = 0;
    int ultimo = na + nb - 1;
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
                c[i + j] = a[i];
                i++;
            }
            break;
        }
        if (a[i] < b[j])
        {
            c[i + j] = a[i];
            i++;
        }
        else
        {
            c[i + j] = b[j];
            j++;
        }

    }
    return c;

}
int main()
{
     	
    const int NA = 6, NB = 4;
    int a[NA] = { 0, 3, 5, 6, 8, 9};
    int b[NB] = { 1, 2, 4, 7};
    int* c = merge_arrays(a, NA, b, NB);
    
    print_array(c, NA+NB);
    delete [] c; 



}