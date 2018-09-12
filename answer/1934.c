#include <stdio.h>

int main(){
    int t,a,b,tm;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        tm = (a < b ? a/2 : b/2)+1;
        if(a%b == 0 || b%a == 0){
            if(a < b)
                a=1;
            else b=1;
            tm=1;
        }
        while(tm-->1){
            if( a%tm==0 && b%tm==0 ){
                a=a/tm;
                break;
            }
        }
        printf("%d\n",a*b);
    }
    return 0;
}