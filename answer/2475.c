main(){
    int t=5,a,r=0;
    while(t--){
        scanf("%d",&a);
        r += (a*a);
    }
    printf("%d",r%10);
}