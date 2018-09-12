main(){
    int num,k,cnt,t=5;
    scanf("%d",&num);
    cnt=0;
    while(t--){
        scanf("%d",&k);
        if(k==num){
            cnt++;
        }
    }
    printf("%d",cnt);
}