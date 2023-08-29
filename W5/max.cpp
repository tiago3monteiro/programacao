#include <iostream>

using namespace std;

int max(const int a[], int n)
{
    int max = -65536;
    for(int i = 0 ; i<n ; i++)
    {
        if (a[i]>max) max = a[i];   

    }
    return max;

}




int main()
{
    { const int n = 1;
  const int a[n] = { -123 };
  cout << max(a,n) << '\n'; }

    return 0;
}