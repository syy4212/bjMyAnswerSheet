main(){
    int t,k,j,tmt,i=1;
    scanf("%d",&t);k=t-1;
    while(t--){
        j=i;
        tmt = t;
        while(tmt--)
            printf(" ");
        while(j--)
            printf("*");
        printf("\n");
        i=i+2;
    }
    i=0;
    while(k--){
        j=i+1;
        tmt = (k*2)+1;
        while(j--)
            printf(" ");
        while(tmt--){
            printf("*");
        }
        printf("\n");
        i++;
    }
}