#include <iostream>

using namespace std;


int adigits(int a, int b, int c) {
    int maior = max(max(a,b),c);
    if (maior == a){
        if (b>c)return a*100 + b*10 + c;
        return a*100 + c*10 + b;}
    if (maior == b){
        if (a>c)return b*100 + a*10 + c;
        return b*100 + c*10 + a;}
    if (maior == c){
        if (b>a)return c*100 + b*10 + a;
        return c*100 + a*10 + b;}

    return 0;
}

