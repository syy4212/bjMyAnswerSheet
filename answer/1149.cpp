#include <cstdio>
#include <cstring>

using namespace std;

int t;
int color[1001][3];

int min(int a, int b, int c){
    if(a>=b){
        if(b>=c) return c;
        else return b;
    }
    else{
        if(a>=c) return c;
        else return a;
    }
}

int mincolor(int a, int b){
    if (a>b) return b;
    else return a;
}

void solve(int i){
    int min_0 = mincolor(color[i-1][1]+color[i][0],color[i-1][2]+color[i][0]);
    int min_1 = mincolor(color[i-1][0]+color[i][1],color[i-1][2]+color[i][1]);
    int min_2 = mincolor(color[i-1][0]+color[i][2],color[i-1][1]+color[i][2]);
    color[i][0] = min_0;
    color[i][1] = min_1;
    color[i][2] = min_2;
}

int main(){
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d%d%d",&color[i][0],&color[i][1],&color[i][2]);
        if(i>1) solve(i);
    }
    printf("%d",min(color[t][0],color[t][1],color[t][2]));
    return 0;
}