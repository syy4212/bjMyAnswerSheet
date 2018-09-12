main(){
    char name[101];
    int t=0;
    scanf("%s",name);
    while(name[t]!='\0'){
        if(t==0){
            printf("%c",name[t]);
        }
        else if(name[t]=='-'){
            printf("%c",name[t+1]);
        }
        t++;
    }
    printf("\n");
}