main(){
    int a[301][301],n,m,k,i,j,x,y,tmpi,tmpj,rlt;
    scanf("%d %d",&n,&m);
    for(tmpi=0;tmpi<n;tmpi++){
        for(tmpj=0;tmpj<m;tmpj++)
            scanf("%d",&a[tmpi][tmpj]);
    }
    scanf("%d",&k);
    while(k--){
        rlt=0;
        scanf("%d %d %d %d",&i,&j,&x,&y);
        for(tmpi=i-1;tmpi<x;tmpi++){
            for(tmpj=j-1;tmpj<y;tmpj++)
                rlt += a[tmpi][tmpj];
        }
        printf("%d\n",rlt);
    }
}