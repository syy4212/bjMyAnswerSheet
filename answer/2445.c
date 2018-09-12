main(){
    int i,j,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        j=i;
        while(j--){
            printf("*");
        }
        j=(t-i)*2;
        while(j--){
            printf(" ");
        }
        j=i;
        while(j--){
            printf("*");
        }
        printf("\n");
    }
    for(i=t-1;i>0;i--){
        j=i;
        while(j--){
            printf("*");
        }
        j=(t-i)*2;
        while(j--){
            printf(" ");
        }
        j=i;
        while(j--){
            printf("*");
        }
        printf("\n");
    }
}