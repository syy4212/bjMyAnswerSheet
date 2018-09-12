main(){
    int t=5,rlt=0,score;
    while(t--){
        scanf("%d",&score);
        if(score<40){
            score=40;
        }
        rlt += score;
    }
    printf("%d",rlt/5);
}