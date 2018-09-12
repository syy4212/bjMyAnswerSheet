#include <cstdio>
int main(){
    int t=9,max=-1,index=0,num;
    for(int i=1;i<=t;i++){
        scanf("%d",&num);
        if(max<num){index=i;max=num;}
    }
    printf("%d\n%d",max,index);
    return 0;
}