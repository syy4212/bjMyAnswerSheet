#include <iostream>
#include <algorithm>

using namespace std;

int t;

int main() {
	 int a[50],b[50];
	 int s=0;
	 cin >> t;
	 for(int i=0; i<t;i++){
	 	cin >> a[i];
	 };
	 for(int i=0; i<t;i++){
	 	cin >> b[i];
	 };
	 sort(a,a+t);
	 sort(b,b+t);
    for(int i=0; i<t;i++){
	 	s += (a[i]*b[t-i-1]);
	 };
    cout << s << endl;
    return 0;  
}