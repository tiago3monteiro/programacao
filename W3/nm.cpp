#include <iostream>

using namespace std;

unsigned long next_mersenne(unsigned long n) {
    
    unsigned long closest = 2;
    
    if (n == 0) return 0;
    while (true) 
    {
        
        if (closest-1 == n) return n;
    
        if (closest -1 < n) closest*=2;

        if (closest-1 >  n) {
            return closest-1;

        } 

    }

}
