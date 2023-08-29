#include <iostream>
#include "complex.h" 

using namespace std;


complex add(complex c1, complex c2)
{
    complex res;
    res.real = c1.real + c2.real;
    res.img = c1.img + c2.img;
    return res;

}
complex mul(complex a, complex b)
{   
    complex r;
    r.real=a.real*b.real-a.img*b.img;
    r.img=a.real*b.img+a.img*b.real;
    return r;

}


void mandel(complex c, int n, complex z[]) {
    z[0] = {0, 0};
    complex res = {0, 0};
    for (int i = 1; i < n; i++) {
        res = mul(res, res);
        res = add(res, c);
        z[i] = res;
}
}
