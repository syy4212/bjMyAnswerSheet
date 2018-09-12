main(){
    int a,b,t;
    char num[4];
    scanf("%d",&t);
    while(t--){
        scanf("%s",num);
        a = num[0] - '0';
        b = num[2] - '0';
        printf("%d\n",a+b);
    }
}