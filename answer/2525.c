main(){
    int h,m,t,cnt;
    scanf("%d %d %d",&h,&m,&t);
    cnt=0;
    m += t;
    while(m>=60){
        m -= 60;
        cnt++;
    }
    h += cnt;
    while(h>=24){
        h -= 24;
    }
    printf("%d %d",h,m);
}