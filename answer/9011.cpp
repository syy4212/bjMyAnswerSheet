#include <iostream>
using namespace std;

int main() {
	int t,n,s[100], r[100];
	bool psb;
	cin >>t;
	while(t--){
		cin >> n;
		psb = true;
		for(int i=0;i<n;i++)
		cin>>s[i];
		for(int i=0;i<n;i++){
			r[i]=s[i]+1;
			if(s[i]>i){
				psb = false;
				break;
			}
			for(int j=0; j<i;j++){
				if(r[j]>s[i])
				r[j]++;
			}
		}
		if(psb)
			for(int i=0;i<n;i++){
				cout << r[i] <<" ";
			}
		else
			cout << "IMPOSSIBLE";
		cout << endl;
	}
	return 0;
}