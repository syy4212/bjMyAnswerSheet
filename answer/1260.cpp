#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

bool check1[1001];
bool check2[1001];
vector<vector<int> > arr(1001);
int n,m,s,a,b;

void dfs(int x){
    check1[x] = true;
    printf("%d ",x);
    for (int i=0; i< arr[x].size(); i++) {
        if (check1[arr[x][i]] == false) {
            dfs(arr[x][i]);
        } }
}

void bfs(int x){
    queue<int> q;
    check2[x] = true; q.push(x);
    while (!q.empty()) {
        int x = q.front();q.pop();
        printf("%d ",x);
        for (int i=0; i<arr[x].size(); i++) {
            if (check2[arr[x][i]] == false) {
                check2[arr[x][i]] = true;
                q.push(arr[x][i]);
            }
        }
    }
}

int main(){
    scanf("%d%d%d",&n,&m,&s);
    while(m--){
        scanf("%d%d",&a,&b);
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    while(n--){
        sort(arr[n+1].begin(), arr[n+1].end());
    }
    dfs(s);
    printf("\n");
    bfs(s);
    printf("\n");
}