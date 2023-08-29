#include <iostream>
#include "print_array.h"

using namespace std;



int filter_duplicates(const int a[], int n, int b[])
{
    int j = 1;
    b[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i-1])
        {
            b[j] = a[i];
            j++;
        }
    
    }

    
    return j;

}
