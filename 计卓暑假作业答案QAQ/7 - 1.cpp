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
	reverse(a, a + n);
	for (int i = 0 ; i < n ; i ++) {
		cout << a[i] ;
		if (i != n - 1)
			cout << ' ';//PTA评测姬的脑子不太正常，不特判空格不给过
	}
	cout << '\n';
}

int main() {
	//下面两行是给输入输出加速的，99%的情况不加能过
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	solve();
	return 0;
}