#include <iostream>
#include <map>

using namespace std;

map<unsigned long, unsigned long> known =  {{0,0}, {1,1}};

unsigned long pell(unsigned long n)
    {
    if(known.count(n) == 0 )
    {
        unsigned long newValue = 2* pell(n-1) + pell(n-2);
        known[n] = newValue;
    }
    return known[n];

    }

int main() 
{
    for (int i = 0; i<=50; i++)cout << i<<": " << pell(i) << '\n';  
    
    return 0;
    
}
