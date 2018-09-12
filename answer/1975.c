main(){
	int t,num, zeronum, temp, i;
	scanf("%d",&t);

	while(t--){
		zeronum = 0;
		scanf("%d",&num);

		for(i=2;i<=num;i++){
			temp = num;
			while(temp%i==0){
				zeronum++;
				temp /= i;
			}
		}
		printf("%d\n",zeronum);
	}
}

/*

//C++ ver

#include <iostream>

using namespace std;

int main(){
	int t,num, zeronum;
	cin >> t;

	while(t--){
		zeronum = 0;

		cin >> num;

		for(int i=2;i<=num;i++){
			int temp = num;
			while(temp%i==0){
				zeronum++;
				temp /= i;
			}
		}

		cout << zeronum << endl;
	}
}

*/