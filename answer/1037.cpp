#include <iostream>                                                                           
#include <algorithm>

using namespace std;

int t;

int main() {
	 int a[50];
	 cin >> t;
	 for(int i=0; i<t;i++){
	 	cin >> a[i];
	 };
	 sort(a,a+t);
    cout << a[0]*a[t-1] << endl;
    return 0;  
}