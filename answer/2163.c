#include <stdio.h>

int creak(int n, int m){
	if (n == 1 && m == 1){
		return 0;
	}
	else{
		if (n > m){
			if (n % 2 == 0){
				return (creak(n / 2, m)*2)+1;
			}
			else{
				return (creak(n / 2, m) + creak((n / 2)+1, m)) + 1;
			}
		}
		else{
			if (m % 2 == 0){
				return (creak(n,m/ 2) * 2) + 1;
			}
			else{
				return (n, creak(n, m / 2) + creak(n, (m / 2)+1)) + 1;
			}
		}
	}
}

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%d", creak(n, m));
}