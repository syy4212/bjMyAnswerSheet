#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int k,n,m;
	scanf("%d%d%d",&k,&n,&m);
	
	int rlt = (k*n)-m;
	if(rlt<=0){
		printf("0");
	}
	else{
		printf("%d",rlt);
	}
	return 0;
}