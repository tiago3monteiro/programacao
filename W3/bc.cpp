#include <iostream>

using namespace std;

unsigned long bc(unsigned long n, unsigned long k){
    unsigned long x = n - k + 1 ;
    unsigned long upper = 1;
    while(n >= x)
    {
        upper *= n;
        n --;
    }
    
    unsigned long lower = 1;
    while(k>= 1)
    {
    
        lower *= k;
        k--;
    }
    return upper/lower;

}

int main(){

    cout << bc(3, 0) << '\n';
    cout << bc(3, 1) << '\n';
    cout << bc(3, 2) << '\n';
    cout << bc(3, 3) << '\n';
    return 0;
}
