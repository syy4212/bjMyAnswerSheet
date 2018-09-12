main(){
    int i=0,t,r=0;
    char a[7];
    scanf("%s",a);
    while(a[i]!='\0'){
        if(a[i]>='A') t = a[i]-'A'+10;
        else t = a[i]-'0';
        r *= 16;
        r += t;
        i++;
    }
    printf("%d\n",r);
}