#include <iostream>
#include <cmath>
using namespace std;


int leng(const char str[]) {
int l = 0;
while (str[l] != '\0')
l++;
return l;
}

unsigned long hstr_to_integer(const char hstr[]){
  unsigned long i= 0, res = 0, digit = 0;
  unsigned long len = leng(hstr); 
  unsigned long pow = 1;

  while (hstr[i] != '\0') {
    digit = 0; pow = 1;

    if (int('0') <= int(hstr[i]) and (int(hstr[i]) <= int('9'))) {
      digit += int(hstr[i]) - int('0');
    }  
    if (int('a') <= int(hstr[i]) and (int(hstr[i]) <= int('f'))) {
      digit += int(hstr[i]) - int('a') + 10;
    }
    if (int('A') <= int(hstr[i]) and (int(hstr[i]) <= int('F'))) {
      digit += int(hstr[i]) - int('A') + 10;
    }
    
    for (unsigned long p=0; p < (len - i - 1); p++) {
      pow *= 16;
    }
    res += digit * pow;
    i++;
  }
  return res;
}


