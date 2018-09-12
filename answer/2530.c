main(){
    int h,m,s,ins;
    scanf("%d%d%d%d",&h,&m,&s,&ins);
    s =(s+ins%60);
    printf("%d %d %d",(h+((ins/60)%60+m+s/60 >= 60 ? 1 : 0)+(ins/3600))%24,(m+(ins/60)+(s/60 == 1 ? 1 : 0))%60,s%60);
}