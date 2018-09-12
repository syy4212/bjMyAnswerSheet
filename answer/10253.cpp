#include <iostream>
using namespace std;

int gcd(int x, int y) {
    if (y == 0) return x; else return gcd(y,x%y);
}

int main(){
    int t,a,b,x;
    cin >> t;
    while(t--){
        cin >> a >> b;
        int g = gcd(a,b);
        a /= g;
        b /= g;
        while (a!=1) {
            x = b/a;
            if(b%a != 0) x++;
            a = (a*x)-b;
            b *= x;
            g = gcd(a,b);
            a /= g;
            b /= g;
        }
        cout << b << endl;
    }
    return 0;
}