main(){
    int i,t,cute,rlt=0;
    scanf("%d",&t);
    i=t;
    while(i--){
        scanf("%d",&cute);
        rlt += cute;
    }
    if(rlt*2<t){
        printf("Junhee is not cute!");
    }
    else{
        printf("Junhee is cute!");
    }
}