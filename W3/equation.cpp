#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int solve_eq(int a, int b, int c, double& x1, double& x2){
    int solucoes, binamino = b*b - 4*a*c;
    if (binamino > 0) solucoes = 2;
    else if (binamino == 0) solucoes = 1;
    else solucoes = 0;

    switch (solucoes)
    {
    case 1:
        x1 = (-b + sqrt(binamino))/(2*a);
        x2 = NAN;
        return solucoes;
    case 2:
        x1 = (-b - sqrt(binamino))/(2*a);
        x2 = (-b + sqrt(binamino))/(2*a);
        return solucoes;
    
    default:
        x1 = NAN;
        x2 = NAN;
        return solucoes;
    }

}



int main(){
    double x1, x2; 
    int r = solve_eq(1, 1, 0, x1, x2); 
    cout << fixed << setprecision(7) 
     << r << ' ' << x1 << ' ' << x2 << '\n'; 
    return 0;

}