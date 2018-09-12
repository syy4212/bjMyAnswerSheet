#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	
	char str[5][17];
	bool f[5]={ false };
	scanf("%s%s%s%s%s",str[0],str[1],str[2],str[3],str[4]);
	int blank=0;
	for(int i=0;blank<5;i++){
		for(int j=0;blank<5 && j<5;j++){
			if(str[j][i]=='\0' && f[j]==false){
				blank++;
				f[j]=true;
			}
			else if(f[j]==false){
				printf("%c",str[j][i]);
			}
		}
	}
	return 0;
}