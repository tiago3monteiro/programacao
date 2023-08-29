#include <iostream>
#include <algorithm>

using namespace std;

int median(const int a[], int n)
{
    int res;
    int* temp = new int[n];
    for (int i = 0; i < n; i++ )
    {
        *(temp+i) = a[i];
    }
    sort(temp,temp+n);
    if ( n%2 == 1 ) res = temp[n/2];
    else res = (temp[(n/2)-1] + temp[n/2])/2;
    delete []temp;
    return res;
}


