#include <iostream>
#include "interval.h"

using namespace std;

int convM(time_of_day v)
{
    return (v.h * 60) + v.m;
}


int search_intervals(time_of_day t, const interval a[], int n, interval &u)
{
    int inicio,fim;
    u = {t,t};
    for (int i = 0; i < n; i++)

    {
        inicio = convM(a[i].start);
         fim = convM(a[i].end);

        if (convM(t) >= inicio && convM(t) < fim)
        {
            if (inicio < convM(u.start)) u.start = a[i].start;

             if (fim > convM(u.end)) u.end = a[i].end;
        } 
            
    }
    return convM(u.end)-convM(u.start);
}


