main(){
    int a,b,t,rlt=1;
    scanf("%d%d",&a,&b);
    t=b;
    while(t--){
        rlt *= a;
        a--;
    }
    while(b--){
        rlt /= b+1;
    }
    printf("%d",rlt);
}