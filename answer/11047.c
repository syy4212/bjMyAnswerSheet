main(){
    int n,k,num[10],cnt=0;
    scanf("%d %d",&n,&k);
    while(n--){
        scanf("%d",&num[n]);
    }
	n++;
    while(k!=0){
        while(num[n]<=k){
            k = k-num[n];
            cnt++;
        }
        n++;
    }
    printf("%d",cnt);
}