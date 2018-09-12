#include <cstdio>
#define mod 1000000000
int main(){
    int d[101][10];
    d[1][0]=0;
    for(int i=1;i<10;i++){
        d[1][i]=1;
    }
    int t;
    scanf("%d",&t);
    for(int i=2;i<=t;i++){
        for(int j=0;j<10;j++){
            if(j==0){
                d[i][0]=d[i-1][1];
            }
            else if(j==9){
                d[i][9] = d[i-1][8];
            }
            else{
                d[i][j]=(d[i-1][j-1] + d[i-1][j+1])%mod;
            }
        }
    }
    int rlt = 0;
    for(int i=0;i<10;i++){
        rlt = (rlt + d[t][i]) % mod;
    }
    printf("%d\n",rlt%mod);
}