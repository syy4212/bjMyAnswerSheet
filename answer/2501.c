main(){
    int n,k,i,temp,rlt=0;
    scanf("%d %d",&n,&k);
    if(k==1){rlt=1;}
    else{
        for(i=2;i<=n;i++){
            if(n%i==0) k--;
            if(k==1){rlt=i; break;}
        }
    }
    printf("%d",rlt);
}