#include <iostream>

using namespace std;


unsigned long bc(unsigned long n , unsigned long k){    
    unsigned long x = n - k + 1 ;
    unsigned long upper = 1;

    while(n >= x){
        upper *= n;
        n --;
    }

    unsigned long lower = 1;

    while(k>= 1){
        lower *= k;
        k--;
    }
    return upper/lower;
}

unsigned long bell(unsigned long n){
    if (n <= 1)
        return 1;

    unsigned long out = 0;
    for(unsigned long i = 0; i < n; i++){
        out += bc(n-1,i) * bell(i);
    }
    return out;
}

