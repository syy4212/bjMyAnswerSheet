#include <iostream>
#include <string>

using namespace std;

int testcase;

int main() {
	 string a,input_st;
	 cin >> testcase;
	 cin >> a;
    testcase--;
    while (testcase--){
    	 cin >> input_st;
    	 for(int i=0;i<a.length();i++){
    	 	if(a[i]!='?' && a[i]!=input_st[i]){
    	 		a[i]='?';
    	 	}
    	 }
    }
    cout << a << endl;
    return 0;  
}