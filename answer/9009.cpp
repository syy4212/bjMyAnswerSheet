#include <iostream>
using namespace std;

int fibonacci[10000]={0,1,0};

void findFibonacci(int k){
	int i=1;
	if(k!=0){
		do{	i++;
			if(fibonacci[i]==0){
				fibonacci[i] = fibonacci[i-1]+fibonacci[i-2];
			}
		}while(fibonacci[i]<=k);
	findFibonacci(k-fibonacci[i-1]);
	cout << fibonacci[i-1] << " ";
	}
}

int main() {
	int t;
	cin >> t;
	while(t--){
		int a;
		cin >> a;
		findFibonacci(a);
		cout << endl;
	}
	return 0;
}