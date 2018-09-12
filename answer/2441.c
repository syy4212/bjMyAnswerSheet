#include <stdio.h>
 
int main(){
    int t,tmt,i,j;
    scanf("%d",&t);
    i=0;
    while(t--){
        j=i;
        tmt = t+1;
        while(j--)
            printf(" ");
        while(tmt--)
            printf("*");
        printf("\n");
        i++;
    }
    return 0;
}