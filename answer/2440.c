#include <stdio.h>
 
int main(){
    int t,tmt;
    scanf("%d",&t);
    while(t--){
        tmt = t+1;
        while(tmt--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
