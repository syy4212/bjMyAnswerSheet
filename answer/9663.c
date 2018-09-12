#include <stdio.h>
#include <stdlib.h>
 
void queens(int);
int isok(int);
int n,cnt;
int col[255] = { 0, };
 
int main() {
	cnt=0;
	scanf("%d", &n);
	queens(0);
	printf("%d\n",cnt);
}
 
 
void queens(int i) {
	int j;
 
	if (isok(i)) {
		if (i == n) cnt++;
		else
			for (j = 1; j <= n; j++) {
				col[i + 1] = j;
				queens(i + 1);
			}
	}
}
 
int isok(int i) {
	int k = 1, rlt = 1;
	while (k < i && rlt) {
		if (col[i] == col[k] || abs(col[i] - col[k]) == abs(i - k))
			rlt = 0;
		k++;
	}
	return rlt;
}
