#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;
char a[55];
int dm[55][55];
int n;
void dp(int l, int r, string s) {
	if (dm[l][r] != -1) return;
	if (l == r || r < l) {
		dm[l][r] = 0;
		return;
	}
	dp(l + 1, r - 1, s);
	dp(l + 1, r, s);
	dp(l, r - 1, s);
	int ret = dm[l + 1][r - 1] + (s[l] != s[r]);
	ret = min(ret, dm[l + 1][r] + 1);
	ret = min(ret, dm[l][r - 1] + 1);
	dm[l][r] = ret;
}
int go(string s) {
	if (s.length() <= 1) return 0;
	memset(dm, -1, sizeof(dm));
	dp(0, s.length() - 1, s);
	return dm[0][s.length() - 1];
}
int main() {
	scanf("%s", a);
	string s = a;
	int ans = go(s);
	for (int i = 0; i < s.length(); i++)
		for (int j = i + 1; j < s.length(); j++) {
			string tmp = s;
			swap(tmp[i], tmp[j]);
			ans = min(ans, go(tmp) + 1);
		}
	printf("%d\n", ans);
	return 0;
}
