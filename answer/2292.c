main(){
    int t,rlt=1,m=1;
    scanf("%d",&t);
    while(t>m){
        m += rlt*6;
        rlt++;
    }
    printf("%d",rlt);
}