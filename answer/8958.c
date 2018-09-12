main(){
    char a[82]; int t, k, r, p;
    scanf("%d", &t);
    while (t--){
        scanf("%s", a); p = 0, r = 0, k = 0;
        while (a[p] != '\0'){
            if (a[p] == 'O'){
                k++;
                r += k;
            }
            else
                k = 0;
            p++;
        }
        printf("%d\n", r);
    }
}