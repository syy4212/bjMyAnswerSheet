#include <stdio.h>

int main(){
    char i[200];
    while(scanf("%[^\n]s",i) != -1){
        getchar();
        printf("%s\n",i);
    }
    return 0;
}