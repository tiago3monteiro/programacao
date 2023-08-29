#include <iostream>

using namespace std;

unsigned long pell(unsigned long n)
{
    unsigned long res = 0,p0 = 0,p1 = 1;
    if (n == 0) return 0;

    if (n == 1) return 1;

    for (unsigned long i = 2 ; i<=n ;i ++) 
    {
        res = 2*p1 + p0;
        p0 = p1;
        p1 = res;
        
    }
    return res;

}

int main() 
{
    for (int i = 0; i<=50; i++)cout << i<<": " << pell(i) << '\n';   // até 25 funciona :( 
    
    return 0;
    
}


