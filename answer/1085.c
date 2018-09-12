main(){int a,b,x,y; scanf("%d %d %d %d",&a,&b,&x,&y);
       x = x-a < y-b ? x-a : y-b ;
       y = a < b ? a : b;
       printf("%d",x<y?x:y);}