#include <cstdio>

long long pa[101]={0};

long long sol(int n){
    if(pa[n]<=0){
        pa[n] = sol(n-1)+sol(n-5);
    }
    return pa[n];
}

int main(){
    int t,n;
    
    pa[1]=pa[2]=pa[3]=1;
    pa[4]=pa[5]=2;
    
    scanf("%d",&t);
    
    while(t--){
        scanf("%d",&n);
        printf("%lld\n",sol(n));
    }
    return 0;
}