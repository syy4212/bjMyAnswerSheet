#include <cstdio>
#include <iostream>
using namespace std;
int main() {	
	int t;
	int sum = 0;
	int min = 101;
	for(int i=0;i<7;i++){
		scanf("%d",&t);
		if(t%2==1){
			sum = sum+t;
			if(t<min){
				min = t;
			}
		}
	}
	if(sum == 0){printf("-1");}
	else{printf("%d\n%d",sum,min);}
	return 0;
}