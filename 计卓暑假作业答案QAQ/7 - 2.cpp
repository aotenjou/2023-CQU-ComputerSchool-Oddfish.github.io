#include <iostream>
#include <algorithm>
using namespace std;

const int N = 2e5 + 10;
int n;
int a[N];

void solve() {
	cin >> n;
	for (int i = 0 ; i < n ; i ++) {
		cin >> a[i];
	}
	bool done = true;
	for (int i = 1 ; i < n ; i ++) {
		if (a[i] <= a[i - 1]) {
			done = false;
			break;
		}
	}
	if (done)
		cout << "YES" << '\n';
	else
		cout << "NO" << '\n';
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	solve();
	return 0;
}