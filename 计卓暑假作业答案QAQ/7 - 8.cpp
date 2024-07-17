#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

const int N = 2e3 + 10;
int a[N];

void solve() {
	int n;
	cin >> n;
	for (int i = 1 ; i <= n ; i ++) {
		int m;
		cin >> m;
		for (int j = 1 ; j <= m ; j ++) {
			int x;
			cin >> x;
			a[x] ++;
		}
	}
	int maxx = -1, num = -1;
	for (int i = 0 ; i <= 1000 ; i ++) {
		if (a[i] >= maxx) {
			maxx = a[i];
			num = i;
		}
	}
	cout << num << ' ' << maxx << '\n';
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	solve();
	return 0;
}