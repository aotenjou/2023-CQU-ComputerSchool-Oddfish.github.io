#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

const int N = 2e5 + 10;
int n, m;
int a[N];

void solve() {
	cin >> n;
	for (int i = 0 ; i < n ; i ++) {
		cin >> a[i];
	}
	double x = 0;
	for (int i = 0 ; i < n ; i ++) {
		x += a[i];
	}
	x /= n;
	double s = 0;
	for (int i = 0 ; i < n ; i ++) {
		s += (a[i] - x) * (a[i] - x);
	}
	s /= n - 1;
	printf("%.2f\n", s);
}

int main() {
	//用printf和scanf的时候需要把加速关掉
	//std::ios::sync_with_stdio(false);
	//std::cin.tie(nullptr);
	solve();
	return 0;
}