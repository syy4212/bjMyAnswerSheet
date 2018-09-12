#include<stdio.h>

int main(){
    int t,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        a = a%10;
        switch(a){
            case 0: printf("10\n"); break;
            case 1: case 5: case 6: printf("%d\n",a); break;
            case 2: printf("%d\n",(b%4==1 ? 2 : (b%4==2 ? 4 : (b%4==3 ? 8 : 6)))); break; //2,4,8,6
            case 3: printf("%d\n",(b%4==1 ? 3 : (b%4==2 ? 9 : (b%4==3 ? 7 : 1)))); break;//3,9,7,1
            case 4: printf("%d\n",(b%2==1 ? 4 : 6)); break;//4,6
            case 7: printf("%d\n",(b%4==1 ? 7 : (b%4==2 ? 9 : (b%4==3 ? 3 : 1)))); break;
            case 8: printf("%d\n",(b%4==1 ? 8 : (b%4==2 ? 4 : (b%4==3 ? 2 : 6)))); break;
            case 9: printf("%d\n",(b%2==1 ? 9 : 1)); break;
        }
    }
    return 0;
}