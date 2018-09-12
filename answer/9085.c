#include <stdio.h>
 
int main(){
    int t1,t2,tt,result;
    scanf("%d",&t1);
    while(t1--){
        result=0;
        scanf("%d",&t2);
        while(t2--){
            scanf("%d",&tt);
            result += tt;
        }
        printf("%d\n",result);
    }
    return 0;
}