main(){
    int t,total,op_t,opnum,opprice;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&total);
        scanf("%d",&op_t);
        while(op_t--){
            scanf("%d %d",&opnum,&opprice);
            total += opnum*opprice;
        }
        printf("%d\n",total);
    }
}