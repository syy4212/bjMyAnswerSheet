main(){
    int i,t1,t2,t3,t4,maxt,maxscore=0;
    for(i=1;i<=5;i++){
        scanf("%d%d%d%d",&t1,&t2,&t3,&t4);
        if(maxscore<(t1+t2+t3+t4)){
            maxscore=t1+t2+t3+t4;
            maxt = i;
        }
    }
    printf("%d %d",maxt,maxscore);
}