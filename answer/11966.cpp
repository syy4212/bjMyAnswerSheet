#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	
	int n;
	bool f = true;
	scanf("%d",&n);
	while(n>1){
		if(n%2==1){
			f = false;
			break;
		}
		n = n/2;
	}
	printf("%d",f == true ? 1 : 0 );
	return 0;
}