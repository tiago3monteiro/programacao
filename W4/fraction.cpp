#include <iostream>
#include "fraction.h"
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

fraction add(fraction a, fraction b)
{
    fraction res;
    res.den = (a.den * b.den);
    res.num = (a.num * b.den) + (b.num * a.den) ;
    int numero = gcd(res.num,res.den);
    res.num /= numero;
    res.den /= numero;
    if (res.den < 0)
    {
        res.den = - res.den;
        res.num = -res.num;

    }
    return res;
}
fraction mul(fraction a, fraction b)

{
    fraction res;
    res.num = a.num * b.num;
    res.den = a.den * b.den;
    int numero = gcd(res.num,res.den);
    res.num /= numero;
    res.den /= numero;
    if (res.den < 0)
    {
        res.den = - res.den;
        res.num = -res.num;

    }
    return res;

}

