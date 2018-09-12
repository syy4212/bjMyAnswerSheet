main(){
    int total,nbook,t=9;
    scanf("%d",&total);
    while(t--){
        scanf("%d",&nbook);
        total -= nbook;
    }
    printf("%d",total);
}