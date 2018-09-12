#include<cstdio>
int n,dp[501][501],ans;

int max(int x, int y){
    return x > y ? x : y;
}

int main(){
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++){
            int a;
            scanf("%d",&a);
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + a;
            ans = max(ans, dp[i][j]);
        }
    printf("%d", ans);
    return 0;
}