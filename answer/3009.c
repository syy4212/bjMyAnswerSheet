main(){
    int point1[2],point2[2],rltx,rlty;
    scanf("%d %d",&point1[0],&point1[1]);
    scanf("%d %d",&point2[0],&point2[1]);
    scanf("%d %d",&rltx,&rlty);
    rltx = (point1[0]==point2[0] ? rltx : (point1[0]==rltx ? point2[0] : point1[0]));
    rlty = (point1[1]==point2[1] ? rlty : (point1[1]==rlty ? point2[1] : point1[1]));
    printf("%d %d\n",rltx,rlty);
}