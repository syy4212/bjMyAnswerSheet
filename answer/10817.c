main(){
    int t,max,input;
    scanf("%d %d",&t,&max);
    while(t--){
        scanf("%d",&input);
        if(input<max){
            printf("%d ",input);
        }
    }
    printf(" ");
}

/*

//C++ ver.

#include <cstdio>
#include <iostream>
#include <algorithm>

int main(){
    int a[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    std::sort(a,a+3);
    printf("%d",a[1]);
}


*/