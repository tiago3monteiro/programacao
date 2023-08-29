#include <iostream>
#include "interval.h"

using namespace std;

int convM (time_of_day v)
{   
    return (v.h *60) + v.m;    
}
interval intersection(interval a, interval b)
{
    interval tmp = a;
    if (convM(a.start) >= convM(b.start))
    {
        a = b;
        b = tmp;
    }               // A.start será sempre menor que B.start (ex.12H30 < 13H30)
    if (convM(a.end) <= convM(b.start)) 
    {
        return {{0,0},{0,0}}; //intervalo a é disjunto de B ---> o final do A é antes de B começar
    }
    else  // A e B não são disjuntos
    {
        if (convM(b.end) <= convM(a.end)) // B está totalmente contido em A
        {
            return {b};
        }
        else return {b.start,a.end};
    }
}

