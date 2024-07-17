#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int N = 40;
int n, d;
int ans[N];

void dfs(int minn, int maxx, int sum, int t) {
	if (sum == n) {
		for (int i = 0 ; i < t ; i ++) {
			cout << ans[i];
			if (i != t - 1)
				cout << ' ';
		}
		cout << '\n';
	}
	for (int i = 1 ; i <= n - sum ; i ++) {
		if (t == 0 || (abs(i - minn) <= d && abs(i - maxx) <= d)) {
			ans[t] = i;
			dfs(min(minn, i), max(maxx, i), sum + i, t + 1);
			ans[t] = 0;
		}
	}
}

void solve() {
	cin >> n >> d;
	dfs(1e9, -1e9, 0, 0);
}

signed main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	solve();
	return 0;
}