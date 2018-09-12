#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int t,n;
	int k[2001]={ 0 };
	scanf("%d",&t);
	
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		k[n+1000]++;
	}
	int cnt = 0;
	for(int i=0;i<2001;i++){
		if(k[i]==1){
			printf("%d\n",i-1000);
			cnt++;
		}
		if(cnt==t) break;
	}
	return 0;
}