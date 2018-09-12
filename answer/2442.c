#include <stdio.h>
 
int main(){
    int t,tmt,i=1,j;
    scanf("%d",&t);
    while(t--){
        j=i;
        tmt = t;
        while(tmt--)
            printf(" ");
        while(j--)
            printf("*");
        printf("\n");
        i=i+2;
    }
    return 0;
}