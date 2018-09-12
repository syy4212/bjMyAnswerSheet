#include <stdio.h>
 
int main(){
    int t,tmt,k,l;
    scanf("%d",&t);
    for(l=k=1;t>0;t--){
        tmt = t-1;
        while(tmt--)
            printf(" ");
        while(k--){
            printf("*");
        }
        l++;
        k=l;
        printf("\n");
    }
    return 0;
}
