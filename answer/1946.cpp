#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n];
		for(int i=1;i<=n;i++){
			int score_a,score_b;
			scanf("%d%d",&score_a,&score_b);
			a[score_a]=score_b;
		}
		int rlt=1, min=a[1];
		for(int i=2;i<=n;i++){
			if(a[i]<min){
				min = a[i];
				rlt++;
			}
		}
		printf("%d\n",rlt);
	}
	return 0;
}