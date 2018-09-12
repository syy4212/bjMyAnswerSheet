#include <stdio.h>
 
int main(){
    int t,tmt,i=0,j;
    scanf("%d",&t);
    while(t--){
        j=i;
        tmt = (t*2)+1;
        while(j--)
            printf(" ");
        while(tmt--){
            printf("*");
        }
        printf("\n");
        i++;
    }
    return 0;
}