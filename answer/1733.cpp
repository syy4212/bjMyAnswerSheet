#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
 
using namespace std;

struct backnum {
    int n;
    int source, sink;
    vector<vector<int> > graph;
    vector<int> check;
    vector<int> matchR;
    vector<int> matchL;
    int step;
    backnum(int n) : n(n) {
        graph.resize(n);
        check.resize(n);
        matchR.resize(n,-1);
        matchL.resize(n,-1);
    };
    
    void add_edge(int u, int v) {
        graph[u].push_back(v);
    }
    
    bool dfs(int x) {
        if (x == -1) return true;
        for (int next : graph[x]) {
            if (check[next] == step) continue;
            check[next] = step;
            if (dfs(matchR[next])) {
                matchR[next] = x;
                matchL[x] = next;
                return true;
            }
        }
        return false;
    }
    int flow() {
        int ans = 0;
        for (int i=0; i<n; i++) {
            step = i+1;
            if (dfs(i)) {
                ans += 1;
            }
        }
        return ans;
    }
};
int main() {
    int n;
    scanf("%d",&n);
    backnum bn(1000000);
    for (int i=0; i<n; i++) {
        int l,r;
        scanf("%d %d",&l,&r);
        bn.add_edge(i,l-1);
        bn.add_edge(i,r-1);
    }
    int ans = bn.flow();
    if (ans != n) {
        printf("-1\n");
        return 0;
    }
    for (int i=0; i<n; i++) {
        printf("%d\n",bn.matchL[i]+1);
    }
    return 0;
}