main(){
    long long a,i,rlt=0;
    scanf("%lld",&a);
    i=a+1;
    a--;
    while(a--){
        rlt += i*(a+1);
    }
    printf("%lld\n",rlt);
}

/*

main(){long long n;scanf("%lld",&n);printf("%lld", ((n)*(n-1)/2*(n+1)));}

*/