main(){
    int up,down,max=0,t=4;
    while(t--){
        scanf("%d%d",&up,&down);
        max=(max<max+up-down?max+up-down:max);
    }
    printf("%d",max);
}

/*

#include <stdio.h>

int main(){
    int innum=0;
    int outnum=0;
    int result=0;
    int temp=0;
    int i=4;
    
    while(i--){
        scanf("%d %d",&outnum, &innum);
        temp=temp+innum-outnum;
        if(result<temp){
            result=temp;
        }
    }
    printf("%d",result);
}

*/