main() {
    int t;
    scanf("%d",&t);
    while (t--) {
        int n, m;
        scanf("%d %d",&n,&m);
        printf("1\n");
        if (n%2==0) {
            for (int i=0; i<n; i++) {
                if (i%2==0) {
                    for (int j=0; j<m; j++) {
                        printf("(%d,%d)\n",i,j);
                    }
                } else {
                    for (int j=m-1; j>=0; j--) {
                        printf("(%d,%d)\n",i,j);
                    }
                }
            }
        } else {
            for (int i=0; i<n; i++) {
                if (i%2==0) {
                    for (int j=(i==0?0:1); j<m; j++) {
                        printf("(%d,%d)\n",i,j);
                    }
                } else {
                    for (int j=m-1; j>=1; j--) {
                        printf("(%d,%d)\n",i,j);
                    }
                }
            }
            for (int i=n-1; i>=1; i--) {
                printf("(%d,%d)\n",i,0);
            }
        }
    }
    return 0;
}