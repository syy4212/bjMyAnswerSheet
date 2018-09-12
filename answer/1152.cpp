#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	
	char *str;
    str = (char *)malloc(sizeof(char)*1000001);
	int rlt=0;
	//scanf("%s",str);
	gets(str);
	if(str[0]=='\0') rlt = -1;
	else{
		int i;
		for(i=0;str[i]==32;i++){
		}
		for(;str[i]!='\0';i++){
			if(str[i]==32 && str[i-1]!=32) rlt++;
		}
		if(str[i-1]==32) rlt--;
	}
	printf("%d",rlt+1);
    free(str);
	return 0;
}