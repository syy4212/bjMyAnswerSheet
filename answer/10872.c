main(){
    int m,rlt=1;
    scanf("%d",&m);
    while(m--){
        rlt *= m+1;
    }
    printf("%d\n",rlt);
}