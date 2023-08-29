#include <iostream>
using namespace std;

int main() {
int correctNumber;
cout << "Insere o número correto: ";
cin >> correctNumber;
int tryNumber;
cout << "Insere a tua tentativa: ";
cin >> tryNumber ;
while(tryNumber != correctNumber)
{
  cout << "Errado! Tenta outra vez: ";
  cin >> tryNumber ;

}
cout << "Correto! O número é" << correctNumber<<endl;
return 0;
  
} 
