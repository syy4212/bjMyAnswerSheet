main(){
    char m,d;
    int t1=4,t2,rlt=0;
    while(t1--){
        t2=4;
        while(t2--){
            scanf("%c%c",&m,&d);
            m == 'F' ? rlt++ : d ;
        }
        t2=4;
        scanf("%c",&d);
        while(t2--){
            scanf("%c%c",&d,&m);
            m == 'F' ? rlt++ : d ;
        }
        scanf("%c",&d);
    }
    printf("%d",rlt);
}