main(){
    long long a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld\n",((a-b)>0 ? a-b : b-a));
}