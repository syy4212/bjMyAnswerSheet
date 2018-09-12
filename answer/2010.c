main(){
    int t,k,rlt=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&k);
        rlt = rlt+k-1;
    }
    printf("%d",rlt);
}

/*

main(){
    int i,t,k,rlt=1;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&k);
        rlt = rlt+k-1;
    }
    printf("%d",rlt);
}

*/