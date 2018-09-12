#include <stdio.h>

int main(){
    int t,k,l;
    scanf("%d",&t);
    for(l=k=1;t>0;t--){
        while(k--){
            printf("*");
        }
        l++;
        k=l;
        printf("\n");
    }
    return 0;
}