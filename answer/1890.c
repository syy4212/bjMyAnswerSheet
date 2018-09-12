#include <stdio.h>
 
int n, board[100][100];
long long int dp[100][100];
 
int main() {
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d",&board[i][j]);
            dp[i][j] = 0;
        }
    }
 
    dp[0][0] = 1;
    
    for(int x=0; x<n; x++) {
        for(int y=0; y<n; y++) {
            if(dp[x][y] == 0 || board[x][y] == 0)
                continue;
            else {
                if(x + board[x][y] < n)
                    dp[x+board[x][y]][y] += dp[x][y];
                if(y + board[x][y] < n)
                    dp[x][y+board[x][y]] += dp[x][y];
            }
        }
    }
    printf("%lld",dp[n-1][n-1]);
    return 0;
}