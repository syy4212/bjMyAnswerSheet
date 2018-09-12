main(){
    int k,a,b,c;
    scanf("%d",&k);
    if(k%10!=0){
        printf("-1");
    }
    else{
        a=k/300;
        k=k%300;
        b=k/60;
        k=k%60;
        c=k/10;
        printf("%d %d %d",a,b,c);
    }
}