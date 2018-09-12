main(){
    int n,i=2;
    scanf("%d",&n);
    if(n>1){
        while(n>i){
            for(;n%i==0&&n!=i;n=n/i){
                printf("%d\n",i);
            }
            i++;
        }
        printf("%d\n",n);
    }
}