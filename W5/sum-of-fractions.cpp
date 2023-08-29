#include <iostream>
#include "fraction.h"
using namespace std;

int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b,a%b);
}

fraction simplify(fraction res)
{
    int numero = gcd(res.num, res.den);
    res.num /= numero;
    res.den /= numero;
    if (res.den < 0)
    {
        res.den = -res.den;
        res.num = -res.num;
    }
    return res;
}

fraction soma(fraction a, fraction b)
{
    fraction res;
    res.den = (a.den * b.den);
    res.num = (a.num * b.den) + (b.num * a.den);

    return res;
}

fraction sum(const fraction fa[], int n)
{
    fraction res = fa[0];

    for (int i = 1; i < n; i++)
        res = soma(res, fa[i]);

    return simplify(res);
}

