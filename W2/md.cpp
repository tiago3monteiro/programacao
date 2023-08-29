#include <iostream>

using namespace std;

int main(){
    int n, x1,y1,x2,y2, res=0;
    cin >> n >> x1 >> y1;
    int i = 2;
    while ( i <= n)
    {
        cin >> x2 >> y2;

        res += (abs(x1-x2)+abs(y1-y2));
        x1 = x2;
        y1 = y2;
        i++;

    }
    cout << res << endl;
    return 0;
}