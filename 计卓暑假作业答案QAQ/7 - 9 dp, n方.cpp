#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

const int N = 2e5 + 10;
bool dp[N];
int x, y, k;

void solve() {
	cin >> x >> y >> k;
	for (int i = 0 ; i <= k + 3 ; i ++) {
		dp[i] = false;
	}
	queue<int> q;
	dp[0] = dp[x] = dp[y] = true;
	q.push(0), q.push(x), q.push(y);
	while (!q.empty()) {
		int t = q.front();
		q.pop();
		for (int j = 0 ; j <= y; j ++) {
			if (dp[j]) {
				if (j + t <= x) {
					if (!dp[j + t]) {
						dp[j + t] = true;
						q.push(j + t);
					}
				}
				if (j + t >= y) {
					if (!dp[j + t - y]) {
						dp[j + t - y] = true;
						q.push(j + t - y);
					}
				}
			}
		}
	}
	for (int i = 0 ; i < k ; i ++) {
		int w;
		cin >> w;
		cout << int(dp[w]) << ' ';
	}
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	solve();
	return 0;
}