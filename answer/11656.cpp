#include <cstdio>
#include <cstring>
#include <vector>
//#include <string>
using namespace std;

#define MAXN 10000

int N;
int SA[MAXN];
char S[MAXN];

void SuffixArray()
{
    int i,k;
    int m = 26;
    vector <int> cnt(max(N,m)+1,0),x(N+1,0),y(N+1,0);
    for (i=1;i<=N;i++) cnt[x[i] = S[i]-'a'+1]++;
    for (i=1;i<=m;i++) cnt[i] += cnt[i-1];
    for (i=N;i;i--) SA[cnt[x[i]]--] = i;
    for (int len=1,p=1;p<N;len<<=1,m=p){
        for (p=0,i=N-len;++i<=N;) y[++p] = i;
        for (i=1;i<=N;i++) if (SA[i] > len) y[++p] = SA[i]-len;
        for (i=0;i<=m;i++) cnt[i] = 0;
        for (i=1;i<=N;i++) cnt[x[y[i]]]++;
        for (i=1;i<=m;i++) cnt[i] += cnt[i-1];
        for (i=N;i;i--) SA[cnt[x[y[i]]]--] = y[i];
        swap(x,y); p = 1; x[SA[1]] = 1;
        for (i=1;i<N;i++)
            x[SA[i+1]] = SA[i]+len <= N && SA[i+1]+len <= N && y[SA[i]] == y[SA[i+1]] && y[SA[i]+len] == y[SA[i+1]+len] ? p : ++p;
    }
}

int main()
{
    int i;
    scanf("%s",S+1);
    N = strlen(S+1);
    SuffixArray();
    for (i=1;i<=N;i++){
        printf("%s\n",S+(SA[i]));
    }
}