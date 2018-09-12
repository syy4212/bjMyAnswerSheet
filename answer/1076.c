main(){
    char a[10];
    long long rlt=0;
    scanf("%s",a);
    if(!strcmp(a,"brown")){
            rlt+=1;
    } else if(!strcmp(a,"red")){
            rlt+=2;
    } else if(!strcmp(a,"orange")){
            rlt+=3;
    } else if(!strcmp(a,"yellow")){
            rlt+=4;
    } else if(!strcmp(a,"green")){
            rlt+=5;
    } else if(!strcmp(a,"blue")){
            rlt+=6;
    } else if(!strcmp(a,"violet")){
            rlt+=7;
    } else if(!strcmp(a,"grey")){
            rlt+=8;
    } else if(!strcmp(a,"white")){
            rlt+=9;
    }
    rlt *=10;
    scanf("%s",a);
    if(!strcmp(a,"brown")){
            rlt+=1;
    } else if(!strcmp(a,"red")){
            rlt+=2;
    } else if(!strcmp(a,"orange")){
            rlt+=3;
    } else if(!strcmp(a,"yellow")){
            rlt+=4;
    } else if(!strcmp(a,"green")){
            rlt+=5;
    } else if(!strcmp(a,"blue")){
            rlt+=6;
    } else if(!strcmp(a,"violet")){
            rlt+=7;
    } else if(!strcmp(a,"grey")){
            rlt+=8;
    } else if(!strcmp(a,"white")){
            rlt+=9;
    }
    scanf("%s",a);
    if(!strcmp(a,"brown")){
            rlt*=10;
    } else if(!strcmp(a,"red")){
            rlt*=100;
    } else if(!strcmp(a,"orange")){
            rlt*=1000;
    } else if(!strcmp(a,"yellow")){
            rlt*=10000;
    } else if(!strcmp(a,"green")){
            rlt*=100000;
    } else if(!strcmp(a,"blue")){
            rlt*=1000000;
    } else if(!strcmp(a,"violet")){
            rlt*=10000000;
    } else if(!strcmp(a,"grey")){
            rlt*=100000000;
    } else if(!strcmp(a,"white")){
            rlt*=1000000000;
    }
    printf("%lld\n",rlt);
}