#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

const int N = 2e5 + 10;
int n, m;
int a[N];

void solve() {
	cin >> n >> m;
	int sum = 0;
	for (int i = 0 ; i < m ; i ++) {
		int x;
		cin >> x;
		sum += x;
	}
	int ans = sum - n * (m - 1);
	ans = max(ans, 0);
	cout << ans << '\n';
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	solve();
	return 0;
}