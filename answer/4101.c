main(){
    int i,j;
    while(1){
        scanf("%d%d",&i,&j);
        if(i==0&&j==0) break;
        else if(i>j) printf("Yes\n");
        else printf("No\n");
    }
}