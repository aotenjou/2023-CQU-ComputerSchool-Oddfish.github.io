//read me ！！！
//代码来源：Khoray，证明需要强周期定理（字符串相关，我也不知道是啥QAQ）


#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

const int N = 2e5 + 10;

void solve() {
    int x,y;
    cin >> x >> y;
    int g = __gcd(x,y);
    int k;
    cin >> k;
    while(k --)
    {
        int w;
        cin >> w;
        if(w % g == 0)
        {
            cout << 1 << ' ';
        }
        else cout << 0 << ' ';
    }
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	solve();
	return 0;
}