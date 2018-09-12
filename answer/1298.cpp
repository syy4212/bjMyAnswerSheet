#include <cstdio>
#include <vector>

using namespace std;

int t,s;
struct Flow{
    int n, source, sink;
    vector<vector<int> > graph;
    vector<bool> check;
    vector<int> pred;
    Flow(int n) : n(n) {
        graph.resize(n);
        check.resize(n);
        pred.resize(n,-1);
    };
    void addEdge(int head, int tail){
        graph[head].push_back(tail);
    }
    bool dfs(int head){
        if(head == -1) return true;
        for(int next : graph[head]){
            if(check[next]) continue;
            check[next] = true;
            if(dfs(pred[next])){
                pred[next] = head;
                return true;
            }
        }
        return false;
    }
    int flow(){
        int rlt = 0;
        for (int i=0; i<n; i++) {
            fill(check.begin(), check.end(), false);
            if(dfs(i)){
                rlt++;
            }
        }
        return rlt;
    }
};

int main(){
    scanf("%d%d",&t, &s);
    Flow curus(t+1);
    while (s--) {
        int head,tail;
        scanf("%d%d",&head,&tail);
        curus.addEdge(head,tail);
    }
    printf("%d\n",curus.flow());
    return 0;
}