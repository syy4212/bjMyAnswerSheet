#include <stdio.h>
int d[1001];
int main() {
    d[1]=1;
    d[2]=3;
    int n;
    scanf("%d",&n);
    for (int i=3; i<=n; i++) {
        d[i] = d[i-1]+(d[i-2]*2);
        d[i] %= 10007;
    }
    printf("%d\n",d[n]);
    return 0;
}