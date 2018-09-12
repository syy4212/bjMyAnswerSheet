#include <cstdio>
#include <queue>

using namespace std;

int tmt[1001][1001];
int d[1001][1001];
int dxy[4][2] = {0,1,0,-1,1,0,-1,0};
int main() {
    int n,m;
    scanf("%d %d",&m,&n);
    queue<pair<int,int> > q;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            scanf("%d",&tmt[i][j]);
            d[i][j] = -1;
            if (tmt[i][j] == 1) {
                q.push(make_pair(i,j));
                d[i][j] = 0;
            }
        }
    }
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int k=0; k<4; k++) {
        	
            int nx = x+dxy[k][0];
            int ny = y+dxy[k][1];
            
            if (0 <= nx && nx < n && 0 <= ny && ny < m) {
                if (tmt[nx][ny] == 0 && d[nx][ny] == -1) {
                    d[nx][ny] = d[x][y] + 1;
                    q.push(make_pair(nx,ny));
                }
            }
        }
    }
    
    int ans = 0;
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (tmt[i][j] == 0 && d[i][j] == -1) {
                ans = -1;
            }
        }
    }
    
    if(ans != -1){
    	for (int i=0; i<n; i++) {
        	for (int j=0; j<m; j++) {
            	if (ans < d[i][j]) {
                	ans = d[i][j];
            	}
        	}
    	}
    }

    printf("%d\n",ans);
    return 0;
}