#include <iostream>

using namespace std;

bool prime(int n){
     if (n <= 1) return false;
    for (int i = 2 ; i < n ; i++)
        if(n % i == 0) return false;
    return true;

}

bool pernicious(int n){
    int cont = 0;
    while (n != 0){
        if (n%2 != 0) cont+=1;
    n /=2;
    }
    if (prime(cont)) return true ;
    return false;

}


int main(){
    int a,b ;
    cin >> a >> b;
    for (int i = a; i<=b ; i++) if (pernicious(i) && prime(i)) cout << i << " ";
    

    return 0;
}

