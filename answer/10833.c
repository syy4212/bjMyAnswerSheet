main(){
    int a,b,t,rlt=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        rlt += b%a;
    }
    printf("%d",rlt);
}