main(){
    int t,h,w,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&h,&w,&n);
        printf("%d\n",((n%h==0?h:n%h)*100)+((n/h)+(n%h==0?0:1)));
    }
}