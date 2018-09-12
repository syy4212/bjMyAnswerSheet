main(){
    int t=3,w1,w2,w3,w4,w;
    char rlt;
    while(t--){
        scanf("%d%d%d%d",&w1,&w2,&w3,&w4);
        w = w1+w2+w3+w4;
        switch(w){
            case 3:
                rlt = 'A';
                break;
            case 2:
                rlt = 'B';
                break;        
            case 1:
                rlt = 'C';
                break;        
            case 0:
                rlt = 'D';
                break;        
            default:
                rlt = 'E';     
        }
        printf("%c\n",rlt);
    }
}