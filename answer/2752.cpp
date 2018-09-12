#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a[3],i=3;
    while(i--){
        scanf("%d",&a[i]);
    }
    sort(a,a+3);
    printf("%d %d %d",a[0],a[1],a[2]);
}