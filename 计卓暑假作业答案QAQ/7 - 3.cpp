#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

const int N = 2e5 + 10;
int n;
int a[N];
string s;

bool isprime(int x) {
	if (x <= 1)
		return false;
	bool ret = true;
	for (int i = 2 ; i <= x / i ; i ++) { //条件只写i < x也可，慢一点而已
		if (x % i == 0) {
			ret = false;
			break;
		}
	}
	return ret;
}

void solve() {
	cin >> s;
	for (int i = 0 ; i < s.size() ; i ++) {
		a[s[i] - 'a'] ++;
	}
	int k1 = -1, k2 = 1e9;
	for (int i = 0 ; i < 26 ; i ++) {
		k1 = max(k1, a[i]);
		if (a[i] != 0) {
			k2 = min(k2, a[i]);
		}
	}
	int b = k1 - k2;
	if (isprime(b)) {
		cout << "Lucky Word" << '\n';
	} else {
		b = 0;
		cout << "No Answer" << '\n';
	}
	cout << b << '\n';
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	solve();
	return 0;
}