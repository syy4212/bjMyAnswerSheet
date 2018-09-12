#include <cstdio>
#include <iostream>

using namespace std;

char gril[12][12];

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int row,col;
		scanf("%d%d",&row,&col);
		for(int i=0;i<row;i++){
			scanf("%s",gril[i]);
		}
		for(int i=row-1;i>=0;i--){
			printf("%s\n",gril[i]);
		}
	}
	return 0;
}