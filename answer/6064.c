main(){
    int t, m, n, x, y;
    scanf("%d", &t);
    while (t--){
        scanf("%d %d %d %d", &m, &n, &x, &y);
        for(int i=0;i<=n;i++){
            if((m*i+x)%n==y%n){
                printf("%d\n",m*i+x);
                break;
            }
            else if(i==n)
                printf("-1\n");
        }
    }
    return 0;
}

/*

C++ ver

#include <iostream>
using namespace std;
 
int main(){
    int t; cin>>t;
    while(t--){
        int M,N,x,y;
        cin>>M>>N>>x>>y;
 
        int ans=-1;
        for(int i=0; x+i*M<=M*N; ++i)
            if( (x+i*M)%N == y  || (x+i*M)%N == 0 && N==y){
                ans=x+i*M;
                break;
            }
 
        cout<<ans<<endl;
    }
 
    return  0;
}

*/