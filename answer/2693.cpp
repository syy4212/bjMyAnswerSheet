#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int num[10],t,i;
    scanf("%d",&t);
    while(t--){
        for(i=0;i<10;i++){
            scanf("%d",&num[i]);
        }
        sort(num,num+10);
        printf("%d\n",num[7]);
    }
}
