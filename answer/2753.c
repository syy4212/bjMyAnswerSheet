main(){
    int y;
    scanf("%d",&y);
    
    if(y%400==0){
        printf("1");
    }
    else if(y%100==0){
        printf("0");
    }
    else if(y%4==0){
        printf("1");
    }
    else{
        printf("0");
    }
}