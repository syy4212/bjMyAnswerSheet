#include <cstdio>
#include <algorithm>

using namespace std;

int main (){
    int b1,b2,b3;
    int j1,j2;
    scanf ("%d%d%d%d%d",&b1,&b2,&b3,&j1,&j2);
    int price = min(b1,min (b2,b3)) + min(j1,j2);
    printf ("%d",price-50);
    return 0;
}