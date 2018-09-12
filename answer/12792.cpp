#include <cstdio>

int main(){
    int t,s;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&s);
        if(i==s){
            printf("-1\n");
            return 0;
        }
    }
    printf("1000000007\n");
    return 0;
}