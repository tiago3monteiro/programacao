#include <iostream>

using namespace std;


bool bissexto(int y) {
    if (y % 4 != 0) return false;
    if (y % 100 == 0 && y % 400 != 0) return false;
    return true;
}

int dias (int m,int y){
    switch(m){
        case 1: 
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: 
            return 31;
        case 2: 
            if (bissexto(y)) return 29;
            return 28;
        default:
            return 30;
    }
}

void advance(int delta, int& d, int& m, int& y){
    while(d + delta > dias(m,y)){
        delta -= dias(m,y);
        m++;
        if(m>12){
            m = 1;
            y++;
        }
    }
    d += delta;
}


int main(){
    int d = 31, m = 1, y = 2026; 
    advance(365 + 365 + 50, d, m, y); 
    cout << d << ' ' << m << ' ' << y << '\n';
    return 0;
}
